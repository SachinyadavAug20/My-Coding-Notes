import { memo } from "react"
const Navbar = (props) => {
    console.log("Navbar is rendered")
  return (
    <div><span>This is a {props.adjective} navbar with memo and a normal fn as an props</span>
            <button type="button" onClick={()=>{props.getAdjective()}}>Change Adjective {props.getAdjective()}</button>

        </div>
  )
}

export default memo(Navbar)
