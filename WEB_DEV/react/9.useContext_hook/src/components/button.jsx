import Component1 from "./component1"
import { useContext } from "react"
import { counterContext } from "../context/context"

const Button = () => {
    const count =useContext(counterContext)
  return (
    <div className="bg-lime-700 p-5 m-5 text-white">
            <button type="button"><span><Component1 /></span>This is a button is cool {count.count}</button>
        </div>
  )
}

export default Button
