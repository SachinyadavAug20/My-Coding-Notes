import {useState,useEffect} from "react"


const Navbar = ({color}) => {
    const [clor,setColor]=useState("Blue")
    const [a,setA]=useState(1)
    useEffect(()=>{
        alert(`Color of navbar is ${color}`);
    },[color])
    useEffect(()=>{
        alert(`Clor of navbar is ${clor}`);
    },[clor])




 // Case 1: Run on every render 
  useEffect(() => {
    alert("Hey I will run on every render")
  })

  // Case 2: Run only on first render 
  useEffect(() => {
    alert("Hey welcome to my page. This is the first render")
  }, [])

  // Case 3: Run only when certain values change
  useEffect(() => {
    alert("Hey I am running because color was changed")
  }, [color])

  // Example of Cleanup function
  useEffect(() => {
    alert("Hey welcome to my page. This is the of navbar on app.jsx")
        return ()=>{
            alert("component unmounted")
        }
    }, [])




    return (
        <>
            <div style={{ backgroundColor: "lime",color:"black",padding:"10px",fontWeight:"900", listStyle: "none", display: "flex", gap: "20px" }}>
                <li>Home</li>
                <li>About</li>
                <li>Contact</li>
                <li>very cool{clor}</li>
                <li><button type="button" onClick={()=>{setA(a+Math.floor(Math.random()*10)); setColor("brown")}}>Click me {a} times</button></li>
            </div>
        </>
    )
}
export default Navbar
