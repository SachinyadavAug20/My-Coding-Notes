import { useCallback, useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import Navbar from './components/Navbar'    
import Navbar2 from './components/Navbar2'

function App() {
  const [count, setCount] = useState(0)
    const [renderer,setrenderer]=useState(true)
    const [adjective, setAdjective] = useState("Good")
    function getAdjective(){
        // setAdjective("Cool")
        return "Another"+count
    }

    const getAdjective2= useCallback(()=>{
        // setAdjective("Cool")
        return "Another"+count
    },[renderer])//this won't change feezed won't change at any render unless renderer changes

  return (
    <>
            <Navbar2 adjective={adjective} renderer={renderer} getAdjective={getAdjective2}/>
            <Navbar adjective={adjective} getAdjective={getAdjective}/>
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
        <button onClick={() => {setCount((count) => count + 1); 
    if(count%7==0){
        setrenderer(!renderer);
    }}}>
          count is {count}
        </button>
        <p>
          Edit <code>src/App.jsx</code> and save to test HMR
        </p>
      </div>
      <p className="read-the-docs">
        Click on the Vite and React logos to learn more
      </p>
    </>
  )
}

export default App
