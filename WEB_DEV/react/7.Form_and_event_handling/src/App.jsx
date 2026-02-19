import { useState } from 'react'
import './output.css'

function App() {
    const [bool, setbool] = useState(true)
    const [color, setColor] = useState("red")
    const [form, setForm] = useState({ usrname: "SachinAug@20", password: "password123", phone: "9292929292" })//this are placeholder for input box bank aray will also work {}

    const handlechangel = (e) => {
        setForm({ ...form, [e.target.name]: e.target.value })
        /*
        EXPLANING ABOVE LINE
        1)  That is what { ...form } does.
            {} → create a new object
            ...form → pour everything from old form into it
        
        2) But YOU are telling it using the name attribute.
            Now why the square brackets?
            Because we want JavaScript to treat the string inside the brackets as a key.
            and change value at that key to be the value at e.target.value
        
        3) So [e.target.name] is just:
            "name" when editing name
            "password" when editing password
            "phone" when editing phone
        
        4) Final Summary (so you never forget)
            { ...form } → copy your whole old form
            [e.target.name] → dynamically pick which field to update
            e.target.value → the new typed value
            One function handles all inputs because each input tells its name
         */
        console.log(form)
    }

    return (
        <>
            <div className='bg-slate-600 flex flex-col gap-5 justify-center items-center p-10'>
                <div className='bg-black text-white text-center p-5'>
                    This is a <span className='text-3xl'>{`${bool}`}</span> form               </div>
                <div className='button bg-black text-white p-5'>
                    <button onClick={() => { setbool(!bool) }} type="button">toggle</button>
                </div>
                <div onMouseOver={() => { color == "blue" ? setColor("red") : setColor("blue") }} className='p-5 font-bold text-white text-xl font-serif bg-blue-700'>
                    onMouseOver I am a box {color}
                </div>
                <div className='flex flex-col gap-3'>
                    <input value={form.usrname} onChange={handlechangel} type="text" name="usrname" className='p-2 border border-slate-800 ' />
                    <input type="text" className='p-2 border border-slate-800 ' name="password" value={form.password} onChange={handlechangel} />
                    <input type="number" name="phone" value={form.phone} onChange={handlechangel} className='p-2 border border-slate-800 ' />
                    {/* SPECIAL CASE */}
                    <input type="text" name="country" value={form.country?form.country:""} onChange={handlechangel} className='p-2 border border-slate-800 ' />
                </div>
                <div className='font-mono font-bold'>
                    Your name is {form.usrname} and your password is {form.password}, your number is {form.phone}
                </div>
            </div>

        </>
    )
}

export default App
