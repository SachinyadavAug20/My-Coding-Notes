import { useState,useRef ,useEffect} from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
let f=0;

function App() {
  const [count, setCount] = useState(0)
    let num=0;
    const num2=useRef(0)
    const btnref=useRef()
    // btnref.current.style.backgroundColor="red"; why is incorect
    // Think of React like this:
    // React first creates the UI in memory
    // Then renders it on screen
    // Only after that, refs (useRef) get connected to real DOM elements 

    useEffect(() => {
    btnref.current.style.backgroundColor="red"; 
    },[])
    
   useEffect(()=>{
        num++;//this is inside the function
        num2.current++;//this is using useRef
        f++;//this is outside the function
        console.log(`Re-endered... a = ${num} ,b = ${num2.current} and c = ${f}`)
    })//run on every rerender 

  return (
    <>
      <div>
        <a href="https://vite.dev" target="_blank">
          <img src={viteLogo} className="logo" alt="Vite logo" />
        </a>
        <a href="https://react.dev" target="_blank">
          <img src={reactLogo} className="logo react" alt="React logo" />
        </a>
      </div>
      <h1>Vite + React</h1>
      <div className="card">
        <button ref={btnref} onClick={() => setCount((count) => count + 1)}>
          count is {count}
        </button>
        <p>
          Edit <code>src/App.jsx</code> and save to test HMR
        </p>
                <button type="button" onClick={()=>{
                    btnref.current.style.display="none"
                }}>Click me to remove count</button>
      </div>
      <p className="read-the-docs">
        Click on the Vite and React logos to learn more
      </p>
    </>
  )
}

export default App
