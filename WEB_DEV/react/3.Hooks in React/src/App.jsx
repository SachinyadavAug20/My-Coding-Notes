import React, { useState } from "react";
function App() {
const [count, setCount]=useState(1);
    //can't do same by let a=0 and the increase a buz it's value may change on click but the already rendered page won't re-render it with that value as it state on page cant be chab=nge by simply changing the value of a variable like if printed a then changed it it's already printed instance won't change unless printed it again
  return (
    <>
            <div className="counter">
                You have counted <span>{count}</span> many times                
            </div>
            <button type="button" style={{"width":"122px",padding:"20px"}} onClick={()=>{setCount(count*2)}}>double it {count}</button>
    </>
  )
}

export default App
