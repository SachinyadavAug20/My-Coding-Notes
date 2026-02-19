import { Link } from "react-router-dom"
import { NavLink } from "react-router-dom"
const Navbar=()=>{
    return (
    <div className="flex flex-col gap-5">

            <h1>By a and href</h1>
            <ul className="flex gap-3 bg-lime-500 p-2 font-bold text-black">
                <a href="/home"><li>Home</li></a>
                <a href="/about"><li>About</li></a>
                <a href="/login"><li>Login</li></a>
                <a href="/contact"><li>Contact</li></a>
            </ul>
            <h1>By react Links and to</h1>
            <ul className="flex gap-3 bg-lime-500 p-2 font-bold text-black">
                <Link to="/home"><li>Home</li></Link>
                <Link to="/about"><li>About</li></Link>
                <Link to="/login"><li>Login</li></Link>
                <Link to="/contact"><li>Contact</li></Link>
            </ul>
            <h1>By react NavLinks and to</h1>
            <ul className="flex gap-3 bg-lime-500 p-2 font-bold text-black">
                <NavLink className={(e)=>{return e.isActive?"bg-black p-2 text-white bold":""}} to="/home"><li>Home</li></NavLink>
                <NavLink className={(e)=>{return e.isActive?"bg-black p-2 text-white bold":""}} to="/about"><li>About</li></NavLink>
                <NavLink className={(e)=>{return e.isActive?"bg-black p-2 text-white bold":""}} to="/login"><li>Login</li></NavLink>
                <NavLink className={(e)=>{return e.isActive?"bg-black p-2 text-white bold":""}} to="/contact"><li>Contact</li></NavLink>
            </ul>
    </div>
    )

}
export default Navbar
