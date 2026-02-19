import { useState } from 'react'
import './output.css'
import Navbar from './components/Navbar'
import { counterContext } from './context/context';

function App() {
    const [count, setCount] = useState(0);

    return (
        <div>
            <counterContext.Provider value={{count, setCount}}>//make it avaibale to all
                {/* <Navbar count={count} useCount={useCount} /> */}
                <Navbar />
                <div className='w-[92%] text-4xl capitalize h-full p-12 m-20 flex items-center justify-center bg-black text-white font-mono '>
                    hellow world
                </div>
                <button type="button" onClick={() => { setCount(count + 1) }}>Counter increaser {count}</button>

            </counterContext.Provider>
        </div>

    )
}

export default App
