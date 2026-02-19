import React from "react";
import "./navbar.css"

const Card = (props) => {
    return (
        <>
            <div className="card">
                <img style={{background:"yellow",width:"233px",overflow:"hidden"}} src="https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fwww.mokuomo.com%2Fcdn%2Fshop%2Ffiles%2FIMG_0080.jpg%3Fv%3D1706586383&f=1&nofb=1&ipt=846571a255093f8ffc838bc5f65bb0be2d7c6e4ffb9c4251a4b35773ac97baf5" alt="img" />
                <h1>{props.title}</h1>
                <p>{props.desc}</p>

            </div>
        </>
    )
}
export default Card
