import tkinter as tkinter

def onCheck():
    if x.get()=="Yes":
        print("You Aggred :)")
    else:
        print("You Disagree :(")

root=tkinter.Tk()

x=tkinter.StringVar()
check_btn=tkinter.Checkbutton(root,text="Aggred to something",bg="cyan",fg="magenta",command=onCheck,variable=x,onvalue="Yes",offvalue="No",font=("Arial",20,"bold"),activeforeground="cyan",activebackground="magenta")
check_btn.pack()

root.mainloop()
