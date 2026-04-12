import { styled } from '@mui/material/styles';
import { Button, Paper } from '@mui/material';

export const Root = styled('div')`
  & .MuiTextField-root {
    margin: 8px;
  }
`;

export const PaperStyled = styled(Paper)`
  padding: 16px;
`;

export const FormStyled = styled('form')`
  display: flex;
  flex-wrap: wrap;
  justify-content: center;
`;

export const FileInput = styled('div')`
  width: 97%;
  margin: 10px 0;
`;

export const ButtonSubmit = styled(Button)`
  margin-bottom: 10px;
`;
