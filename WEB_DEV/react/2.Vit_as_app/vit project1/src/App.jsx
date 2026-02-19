import NavBar from "../components/Navbar"
import Footer from "../components/footer"
import Card from "../components/card"

function App() {

    return (
        <>
            <div>
                <NavBar />
                <img className="logo" src="public/vite.svg" alt="" />

                <div className="cards">

                    <Card title="Ok testing" desc="this worked " />
                    <Card title="Welcome to UP" desc="This is a promtion of Uttar pradesh tourisum.#AD" />
                    <Card title="Welcome to GUI" desc="This is GUI boiies" />

                </div>
                <Footer Owner="Harry" />
            </div>
        </>
    )
}

export default App
