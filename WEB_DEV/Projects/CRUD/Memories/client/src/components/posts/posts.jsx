import React from "react";
import Post from "./post/post";
import { MainContainer, SmMargin } from './style'

const Posts = () => {
    return (
        <MainContainer>
            <SmMargin>
                <Post />
            </SmMargin>
            <SmMargin>
                <Post />
            </SmMargin>
            <SmMargin>
                <Post />
            </SmMargin>
        </MainContainer>
    );
};

export default Posts;
