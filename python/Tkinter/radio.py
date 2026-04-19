# radio : similar to checkbox, but you can only select one from a group from tkinter 

import tkinter as tkinter

foods=["pizza","hamburger","hotdog"]

cart=[0,0,0]
def order():
    cart[x.get()]+=1;
    print("Added 1",foods[x.get()],"to cart")
def checkout():
    radio.config(state="disabled")
    print("Food"," "*(len(foods[2])),"Quantity")
    for i in range(len(foods)):
        print(f"{foods[i]} : {cart[i]}")
        

root=tkinter.Tk()

x=tkinter.IntVar()
for i in range(len(foods)):
    radio=tkinter.Radiobutton(root,text=foods[i],font=("Impact",20,"bold"),
                              variable=x, # group them
                              value=i,  # unique key
                              padx=25,
                              pady=10,
                              indicatoron=False, # remove cirecle indicatoron
                              width=370,   # width of box 
                              command=order
                              )
    radio.pack(anchor="w")

checkout_btn=tkinter.Button(text="Checkout",command=checkout)
checkout_btn.pack(anchor="n")

root.mainloop()
