import { createSlice } from '@reduxjs/toolkit'

const initialState = {
    value: 0,
}

export const counterSlice = createSlice({
    name: 'counter',
    initialState,
    reducers: {
        increment: (state) => {
            // Redux Toolkit allows us to write "mutating" logic in reducers. It
            // doesn't actually mutate the state because it uses the Immer library,
            // which detects changes to a "draft state" and produces a brand new
            // immutable state based off those changes
            state.value += 1
        },
        decrement: (state) => {
            state.value -= 1
        },
        incrementByAmount: (state, action) => {
            state.value += action.payload
        },
        doubleIt: (state) => {
            state.value *= 2;
        },
        RandomIncrement:(state)=>{
            state.value+=Math.floor(Math.random()*10)+1
        },
        RandomDecrement:(state)=>{
            state.value-=Math.floor(Math.random()*10)+1
        },
        RandomProduct:(state)=>{
            state.value*=Math.floor(Math.random()*10)+1
        },
    },
})

// Action creators are generated for each case reducer function
export const { increment, decrement, incrementByAmount,doubleIt ,RandomProduct,RandomDecrement,RandomIncrement} = counterSlice.actions

export default counterSlice.reducer
// https://stackoverflow.com/questions/54385323/what-is-a-difference-between-action-reducer-and-store-in-redux
