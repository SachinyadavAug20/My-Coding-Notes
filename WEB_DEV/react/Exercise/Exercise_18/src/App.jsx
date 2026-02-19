import { useEffect, useref, useState } from 'react'
import './output.css'
import Card from './components/Card';
import Navbar from './components/NavBar';

async function getdata(url) {
    const responce = await fetch(url);
    const data = await responce.json();
    return data;
}
// const test={
//     title:"hello",
//     body:"This is the body",
//     id:5
// }
function App() {
    const [cardinfo, setcardinfo] = useState([]);

    useEffect(() => {
       async function s(){
          const a= await getdata("https://jsonplaceholder.typicode.com/posts")
        setcardinfo(a)
        }
        s();
    }, [])
    useEffect(()=>{
console.log(cardinfo)
    },[cardinfo])

    return (
        <>
            <Navbar/>
            <div>
               {/* {console.log(cardinfo)} */}
               {/*  <Card cardinfo={test}/> */}
            </div>
            {cardinfo && cardinfo.map((e)=>{
                return <Card  cardinfo={e}/>
            })}
        </>
    )
}

export default App
