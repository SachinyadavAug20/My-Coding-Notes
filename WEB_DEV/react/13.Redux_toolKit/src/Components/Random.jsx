import { useSelector, useDispatch } from 'react-redux'
import { RandomDecrement, RandomIncrement, RandomProduct } from '../Redux/counter/counterSlice';
import BigCount from './BigCount';
const Random = () => {
    const dispatch=useDispatch();
  return (
    <div>
            <BigCount/>
            <button type="button" onClick={()=>{dispatch(RandomIncrement())}}>Random +</button>
            <button type="button" onClick={()=>{dispatch(RandomDecrement())}}>Random -</button>
            <button type="button" onClick={()=>{dispatch(RandomProduct())}}>Random *</button>
        </div>
  )
}

export default Random
