import React from "react";
import { TextField } from "@mui/material";
import { Root, PaperStyled, FormStyled, FileInput, ButtonSubmit } from './style'

const Form = () => {
    return (
        <Root>
            <PaperStyled elevation={6}>
                <FormStyled>
                    <TextField name="creator" label="Creator" variant="outlined" fullWidth />
                    <TextField name="title" label="Title" variant="outlined" fullWidth />
                    <TextField name="message" label="Message" variant="outlined" multiline rows={4} fullWidth />
                    <FileInput>
                        <TextField type="file" fullWidth />
                    </FileInput>
                    <ButtonSubmit variant="contained" color="primary" size="large" fullWidth>
                        Submit
                    </ButtonSubmit>
                </FormStyled>
            </PaperStyled>
        </Root>
    );
};

export default Form;
