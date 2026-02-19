import { useState } from 'react'
import './output.css'
import { set, useForm } from "react-hook-form"

function App() {
    const {
        register,
        handleSubmit,
        watch,
        setError,
        formState: { errors, isSubmitting },
    } = useForm()
    const delay = (d) => {
        return new Promise((res, rej) => {
            setTimeout(() => {
                res();
            }, d * 1000);
        })
    }
    function hasSpecialCharacters(str) {
        const specialCharacters = "!@#$%^&*()_-+=<>?{}[]|~`"; // Define special characters
        for (let char of specialCharacters) {
            if (str.includes(char)) {
                return true; // Returns true if any special character is found
            }
        }
        return false; // Returns false if none are found
    }

    const onSubmit = async (data) => {
        // await delay(4)//stimuated delay through network
        let r = await fetch("http://localhost:3000/",{method:"POST",body:JSON.stringify(data)})
        let res= await r.text()
        console.log(data,res)
        if (data.usrname === "Shubham" || data.usrname === "harry" || data.usrname === "Rohan") {
            setError("myForm", { message: `${data.usrname} ,This is a blocked user` })
        }
        if (data.usrname.includes("@")) {
            setError("symbol", { message: "@ symbol is not allowed" })
        }
        if (hasSpecialCharacters(data.usrname)) {
            setError("specialChar", { message: "Username must not contain special characters" })
        }
    }

    return (
        <>
            <div className='w-full flex justify-center items-center h-1/6 bg-black text-white'>
                hello form
            </div>

            <div className='flex flex-col m-5 p-4 justify-center items-center bg-opacity-75 bg-yellow-300'>
                {isSubmitting &&
                    <span className='flex flex-row-reverse bg-green-400 text-white font-extrabold text-xl text-center justify-center items-center p-2 m-5 box-border gap-14'><img className='w-[125px]' src="https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fdigitalsynopsis.com%2Fwp-content%2Fuploads%2F2016%2F06%2Floading-animations-preloader-gifs-ui-ux-effects-24.gif&f=1&nofb=1&ipt=7a4897426b2b20ffa9835121208fb3e485ebdf91bfeb55fcf979ceb683b69b5f" alt="" /><div>
                        Form is submitting...</div></span>}
                {/* {!isSubmitting && */}
                <form action="" onSubmit={handleSubmit(onSubmit)} className='flex bg-[url(https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fstatic.vecteezy.com%2Fsystem%2Fresources%2Fpreviews%2F025%2F374%2F744%2Fnon_2x%2Fabstract-white-luxury-style-background-ai-generated-free-photo.jpg&f=1&nofb=1&ipt=cc875dc060d7773a392aae74cd62d6534046ae9259eba395b63229ee040d361f)] bg-bg-blue-400 bg-blend-soft-light flex-col justify-center items-center w-full'>
                    {/* givinging error as boolean */}
                    <input placeholder='UserName' {...register("usrname", { required: true, minLength: 5, maxLength: 12 })} type="text" className='border-[2px] p-2 m-5 w-1/2 bg-purple-200' />
                    {errors.usrname && <span className='bg-red-500 text-white'>Error in Username</span>}
                    {/* giving error as message */}
                    <input placeholder='Password' {...register("password", { required: { value: true, message: "Password is required" }, minLength: { value: 12, message: "Password must be minimum of 12 charcters" }, maxLength: { value: 48, message: "Password must to exced 48 characters" } })} type="password" className='border-[2px] p-2 m-5 w-1/2 bg-purple-200' />
                    {errors.password && <span className='bg-red-500 text-white'>{errors.password.message}</span>}
                    <input disabled={isSubmitting} type="submit" value="Submit" className='bg-blue-600 disabled:bg-gray-400 p-2 m-1 hover:bg-green-400 transition-all duration-150 border rounded-xl' />
                    <div class="errors m-5 p-2">

                        {errors.myForm && <span className='bg-red-500 text-white'>{errors.myForm.message}</span>}
                        {errors.symbol && <span className='bg-red-500 text-white'>{errors.symbol.message}</span>}
                        {errors.specialChar && <span className='bg-red-500 text-white'>{errors.specialChar.message}</span>}
                    </div>
                </form>
                {/* } */}

            </div>

        </>
    )
}

export default App
