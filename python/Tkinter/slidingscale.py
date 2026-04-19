import tkinter as tkinter

def submit():
    print("Temp is ",scale.get()," degree C")

root=tkinter.Tk()

scale=tkinter.Scale(root,
                    from_=1000, # start of scale bottom
                    to=00,  # till 
                    length=600, # size of scale
                    orient="vertical", # default is vertical
                    font=("Inter",20,"bold"),
                    tickinterval=100, # numberical calibration
                    showvalue=False, # remove value
                    troughcolor="#69eaff",
                    fg="#FF1C00",
                    bg="#111111"
                    )
scale.set((scale["from"]-scale["to"])/2)

btn=tkinter.Button(root,text="Submit",command=submit)
btn.pack(side="right")
scale.pack()

root.mainloop()
