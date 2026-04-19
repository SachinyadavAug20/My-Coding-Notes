import tkinter as Tk

# wiget : it is UI element like button
# window : it is conainer for wigets

window=Tk.Tk()  # initiate a window
window.geometry("420x420")
window.title("First window")

# icon=Tk.PhotoImage(file='icon.jpg')
# window.iconphoto(True,icon) # true for

window.config(background="#5d8aa8")


window.mainloop() # place window on screen,listen for event
