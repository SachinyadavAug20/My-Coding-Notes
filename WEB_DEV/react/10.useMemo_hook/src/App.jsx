import { useMemo, useState } from 'react'
import './output.css'
let nums = Array(3_000_000).fill(0).map((e, i) => {
    return {
        index: i,
        isMagical: i === 2_000_000
    }
})
function App() {
    const [count, setCount] = useState(0)
    const [numbers,setNumbers]=useState(nums)
    // const magicalnumber=useMemo(()=>{return nums.filter((e) => {return e.isMagical})[0]},[])//.filter goes to all 3,000,000 objects to give the array of matching object
    const magicalnumber=useMemo(()=>{return nums.find((e) => {return e.isMagical})},[numbers])//.find will stop as soon as it finds first match so won't traverse for no reason

   // const magicalnum = nums.filter((e) => {
   //      return e.isMagical === true
   //  }) //this is an expensive comptation can't do it on each rerender when count changes

    return (
        <>
            <div>
                <div>
                    {console.log(magicalnumber)}
                    Magical number is {magicalnumber.index}
                </div>
                <div>
                    <button type="button" onClick={()=>{setCount(count+1)}}>Count {count}</button>
                </div>
                <div>
                    <button type="button" onClick={()=>{const rand= Math.floor(Math.random()*1_000_000-1);console.log(rand); setNumbers(nums=Array(1_000_000).fill(0).map((e,i)=>{return {index:i,isMagical:i===rand}}))}}>Change magical number</button>
                </div>

            </div>
        </>
    )
}

export default App
