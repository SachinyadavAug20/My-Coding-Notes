# entry widget = textbox that accepts a single line of user input

import tkinter as tkinter

def submit():
    print("Hello,",entry.get())
    print("Pass",entryp.get())
    entry.config(state="disabled")
    entryp.config(state="disabled")
def delete():
    entry.delete(0,tkinter.END)
def backspace():
    entry.delete(len(entry.get())-1,tkinter.END)

window=tkinter.Tk()
window.config(background="cyan")

entry=tkinter.Entry(window, font=("Inter",20,"bold"), background="yellow", foreground="blue")
entry.insert(0,"Name here")
entry.pack(side=tkinter.LEFT)

entryp=tkinter.Entry(window, font=("Inter",20,"bold"), background="yellow", foreground="blue",show="#")
entryp.pack(side=tkinter.BOTTOM)

submit_button=tkinter.Button(window,text="Submit",command=submit)
submit_button.pack(side=tkinter.RIGHT)

delete_button=tkinter.Button(window,text="Delete",command=delete)
delete_button.pack(side=tkinter.RIGHT)

backspace_button=tkinter.Button(window,text="Backspace",command=backspace)
backspace_button.pack(side=tkinter.RIGHT)

window.mainloop()
