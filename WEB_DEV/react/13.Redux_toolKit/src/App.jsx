import { useState } from 'react'
import './App.css'
import Navbar from './Components/Navbar'
import { useSelector, useDispatch } from 'react-redux'
import { decrement, doubleIt, increment } from './Redux/counter/counterSlice.js'

function App() {
    const count = useSelector((state) => state.counter.value)
    const dispatch = useDispatch()

    return (
        <>
            <Navbar />
            <div style={{ display: "flex", flexDirection: 'column', gap: "12px" }}>
                <div>
                    currently count is {count}
                </div>
                <button type="button" onClick={(e) =>
                    dispatch(increment())
                }>Increment</button>
                <button type="button" onClick={(e) => {
dispatch(decrement())
                }}>Decrement</button>
                <button type="button" onClick={(e) => {
dispatch(doubleIt())
                }}>Double it</button>
            </div>
        </>
    )
    count.increment();
}

export default App
