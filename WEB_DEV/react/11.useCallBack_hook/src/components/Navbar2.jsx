import { memo } from "react"
const Navbar2 = (props) => {
    console.log("Navbar2 is rendered")
  return (
    <div><span>This is a {props.adjective} navbar with memo and a callback fn (which tell react what it will not change during render unless [this array member change])</span>
            <button type="button" onClick={()=>{props.getAdjective()}}>Change Adjective {props.getAdjective()} will i be changing {props.renderer}</button>

        </div>
  )
}

export default memo(Navbar2)
