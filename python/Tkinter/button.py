import tkinter as tkinter
window=tkinter.Tk()

ct=0
def click():
    global ct
    ct+=1
    print("clicked ",ct)

button=tkinter.Button(window,text="Button",background="purple",fg="#2c2c2c",font=('Comic Sans',20,'bold'),command=click,activebackground="yellow",activeforeground="green",state='active', )

button.pack()

window.mainloop()
