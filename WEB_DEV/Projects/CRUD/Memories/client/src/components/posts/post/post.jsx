import React from "react";
import { CardContent, Typography, Button } from "@mui/material";
import { 
    CardStyled, 
    CardMediaStyled, 
    Overlay, 
    Overlay2, 
    Details, 
    Title, 
    CardActionsStyled 
} from './style';

const Post = () => {
    return (
        <CardStyled>
            <CardMediaStyled
                image="https://via.placeholder.com/300"
                title="Memory"
            />
            <Overlay>
                <Typography variant="h6">Creator Name</Typography>
            </Overlay>
            <Overlay2>
                <Typography variant="subtitle1">2 days ago</Typography>
            </Overlay2>
            <CardContent>
                <Title variant="h5">Memory Title</Title>
                <Details>
                    <Typography variant="body1">Memory message...</Typography>
                </Details>
            </CardContent>
            <CardActionsStyled>
                <Button size="small" color="primary">Like</Button>
                <Button size="small" color="primary">Delete</Button>
            </CardActionsStyled>
        </CardStyled>
    );
};

export default Post;
