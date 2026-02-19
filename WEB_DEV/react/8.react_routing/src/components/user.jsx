import { useParams } from "react-router-dom";
const User = () => {
    const params = useParams()
    return (
        <div>
            Good afternoom,Mr. {params.username}
        </div>
    )
}
export default User
