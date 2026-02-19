import { counterContext } from "../context/context"
import Button from "./button"
import { useContext } from "react"

const Navbar = () => {
    const count=useContext(counterContext)
  return (
    <div className="bg-gray-800 text-white p-5 m-5">Navbar
            <div>
                <Button />
 {count.count}           </div>
        </div>
  )
}

export default Navbar
