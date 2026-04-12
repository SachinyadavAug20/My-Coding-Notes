import React from "react";
import { AppBar, Typography } from "@mui/material";
import { AppBarStyled, Heading, Image } from '../../style';

const memories = './images/memory.png'

const Navbar = () => (
    <AppBarStyled position='static' color='inherit'>
        <Heading variant='h2' align='center'>Memories</Heading>
        <Image src={memories} alt="memories" height='60'/>
    </AppBarStyled>
);

export default Navbar;
