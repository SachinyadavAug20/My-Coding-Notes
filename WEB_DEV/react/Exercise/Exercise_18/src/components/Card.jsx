import React from "react";
const Card = ({ cardinfo }) => {
    return (
        <>
            <div className="bg-slate-400 my-5 mx-1 border-slate-800 rounded-[15px] min-w-[44%] flex flex-row gap-1 text-white">
                <div className="relative w-fit">
                    <img className="w-[223px] mx-3" src="https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fcdn-icons-png.flaticon.com%2F512%2F179%2F179573.png&f=1&nofb=1&ipt=13f0caaf69f9cc5995f68fd5372a48c9025488dc3f42314e01055025f409d703" alt=""/>
                    <div className="absolute left-[90%] bottom-[20%] border-slate-900 bg-gray-700 text-white rounded-xl min-w-7 text-center p-0.5">
                        {cardinfo.id}
                    </div>
                </div>
                <div className="flex flex-col w-full pl-5 gap-1 justify-start my-[4%] items-start z-10">
                    <div className="text-3xl font-bold">
                    {cardinfo.title}
                    </div>
                    <div className="text-xl font-normal text-gray-300 break-words whitespace-normal">
                        {cardinfo.body}
                    </div>
                </div>
            </div>
        </>
    )
}
export default Card 
