import { useEffect, useRef, useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import './output.css'

function App() {
    const [count, setCount] = useState(0)
    const [showbtn, setshowbtn] = useState(true)
    const btn = useRef()
    const [todos, settodos] = useState([
        {
            title: "Hii",
            desc: "this is a deafult todo1"
        }, {
            title: "Hey",
            desc: "this is a deafult todo2"
        }, {
            title: "bye",
            desc: "this is a deafult todo3"
        }
    ])
    useEffect(() => {
        if (showbtn == false) {
            btn.current.style.display = "none"
        }
        else if (showbtn == true) {
            btn.current.style.display = "block"
        }
    })
    const Todo = ({todoinfo}) => {
        return (
            <>
                <div className="bg-lime-400 border border-[2px] border-purple-400 hover:border-[10px]" style={{margin:"20px"}}>
                <div>
                    {`Title : ${todoinfo.title}`}
                </div>
                <div>
                    {`Description : ${todoinfo.desc}`}
                </div>
                </div>
            </>)
    }

    return (
        <>
            <div>
                {showbtn ? <button type="button">Show btn is true</button> : <button type="button">Show btn is false</button>}
                <a href="https://vite.dev" target="_blank">
                    {/* this is conditional redendering */}
                    {/* BETTER WAY */}
                    {showbtn && <img src={viteLogo} className="logo" alt="Vite logo" />}
                </a>
                <a href="https://react.dev" target="_blank">
                    <img src={reactLogo} className="logo react" alt="React logo" />
                </a>
            </div>
            <h1>Vite + React</h1>
            <div className="card">
                <button ref={btn} onClick={() => setCount((count) => count + 1)}>
                    count is {count}
                </button>
                <p>
                    Edit <code>src/App.jsx</code> and save to test HMR
                </p>
            </div>
            {/* {Todo("read a book")} */}
            {todos.map((e)=>{
                {/* return <Todo key={e.title} todoinfo={e}/> */}
                return (
                
                <div key={e.title} className="bg-lime-400 border border-[2px] border-purple-400 hover:border-[10px]" style={{margin:"20px"}}>
                <div>
                    {`Title : ${e.title}`}
                </div>
                <div>
                    {`Description : ${e.desc}`}
                </div>
                </div>
                )
            })}
            <p className="read-the-docs">
                Click on the Vite and React logos to learn more
            </p>
            <button type="button" onClick={() => { setshowbtn(!showbtn) }}>Click to toggle the button and vite logo visibilty</button>
        </>
    )
}

export default App
