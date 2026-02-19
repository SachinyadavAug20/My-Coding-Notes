import React from "react";
import "./Navbar"

const Footer=(props)=>{
    return (
    <>
            <footer>
                <li>Copyright (c) 2025 {props.Owner}. All Rights Reserved.</li>
                <li>@{props.Owner} is the rights holder of this page</li>
                <li>This is a part of a MIT lisence</li>
                <li>All rights are Reserved</li>
            </footer>
    </>
    )
}
export default Footer
