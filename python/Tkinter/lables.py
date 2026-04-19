import tkinter as Tk

window=Tk.Tk()

label=Tk.Label(
        window,
        text="Hello world",
        background="lime",
        font=('Arial',40,'bold'),
        padx=20,
        pady=10,
        fg="#5d8aa8",
        relief=Tk.RAISED,
        bd=10) # fg->forground and background(bg) color

# label.place(x=0,y=0) # top left
label.pack()

window.mainloop()
