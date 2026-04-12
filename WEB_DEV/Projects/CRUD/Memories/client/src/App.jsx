import React from "react";
import { Container, Grid } from "@mui/system";
import { Grow } from "@mui/material";
import Posts from "./components/posts/posts";
import Form from "./components/form/form";
import Navbar from "./components/navbar/Navbar";
import { useDispatch } from "react-redux";

const App = () => {
    const dispactch=useDispatch()
    return (
        <div>
            <Container maxWidth='lg'>
                <Navbar />
                <Grow in>
                    <Container>
                        <Grid container justify="space-between" spacing="3">
                            <Grid item xs={12} sm={7}>
                                <Posts />
                            </Grid>
                            <Grid item xs={12} sm={5}>
                                <Form />
                            </Grid>
                        </Grid>
                    </Container>
                </Grow>
            </Container>
        </div>
    );
};

export default App;
