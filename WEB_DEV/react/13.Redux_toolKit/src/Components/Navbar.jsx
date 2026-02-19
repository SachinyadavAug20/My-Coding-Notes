import { useSelector, useDispatch } from 'react-redux'
import { incrementByAmount } from '../Redux/counter/counterSlice';
import Random from './Random';

const Navbar = () => {
    const count = useSelector((state) => state.counter.value)
    const dispatch=useDispatch();
  return (
    <div style={{display:"flex",flexDirection:"column",gap:"20px"}}>
            <Random/>
            <button type="button" onClick={()=>{dispatch(incrementByAmount(10))}}>+10</button>
            This is a navbar count is <span>{count}</span>
            <button type="button" onClick={()=>{dispatch(incrementByAmount(-10))}}>-10</button>
        </div>
  )
}

export default Navbar
