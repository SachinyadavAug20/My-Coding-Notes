import { useContext } from "react"
import { counterContext } from "../context/context"

const Component1 = () => {
    const obj = useContext(counterContext)
    return (
        <div className="bg-red-700 text-white p-5 m-5 flex flex-col gap-3"><span>Componet1</span>
            <button onClick={() => { obj.setCount(obj.count * 2) }} type="button">click to double counter{obj.count}</button>
            <button type="button" onClick={() => { obj.setCount(0) }}>rest the count</button>
        </div>
    )
}

export default Component1
