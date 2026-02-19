import './App.css'
import Navbar from './components/Navbar'
import './output.css'
import { createBrowserRouter ,RouterProvider} from 'react-router-dom'
import Home from './components/Home'
import Login from './components/Login'
import About from './components/about'
import Contact from './components/Contact'
import User from './components/user'

function App() {
    const router=createBrowserRouter([
        {
            path:"/",
            element:<div><Navbar/>Hii</div>
        },
        {
            path:"/home",
            element:<><Home/><Navbar/></>
        },
        {
            path:"/login",
            element:<><Login/><Navbar/></>
        },
        {
            path:"/about",
            element:<><About/><Navbar/></>
        },
        {
            path:"/contact",
            element:<><Contact/><Navbar/></>
        },
        {
            path:"/user/:username",
            element:<><User/><Navbar/></>
        }
    ])

  return (
    <div>
            <RouterProvider router={router}/>
    </div>
  )
}

export default App
