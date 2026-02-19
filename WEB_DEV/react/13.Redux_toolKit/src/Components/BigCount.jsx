import { useSelector, useDispatch } from 'react-redux'
const BigCount = () => {
    const count = useSelector((state) => state.counter.value)
  return (
    <div style={{fontSize:"220px"}}>{count}</div>
  )
}

export default BigCount
