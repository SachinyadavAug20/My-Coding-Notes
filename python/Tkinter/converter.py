import tkinter as tk
from tkinter import ttk
from tkinter import messagebox

# Conversion function
def convert():
    try:
        value = float(entry_value.get())
        conversion_type = combo_conversion.get()

        if conversion_type == "Rupees to Dollars":
            result = value / 92  # Approx conversion rate
            label_result.config(text=f"Result: {result:.2f} USD")

        elif conversion_type == "Celsius to Fahrenheit":
            result = (value * 9/5) + 32
            label_result.config(text=f"Result: {result:.2f} °F")

        elif conversion_type == "Inches to Feet":
            result = value / 12
            label_result.config(text=f"Result: {result:.2f} ft")

        else:
            messagebox.showwarning("Selection Error", "Please select a conversion type")

    except ValueError:
        messagebox.showerror("Input Error", "Please enter a valid number")


# Create main window
root = tk.Tk()
root.title("Conversion Utilities")
root.geometry("350x300")
root.resizable(False, False)

# Heading
label_heading = tk.Label(root, text="Conversion Utilities", font=("Arial", 16, "bold"))
label_heading.pack()

# Input value
label_value = tk.Label(root, text="Enter Value:")
label_value.pack()

entry_value = tk.Entry(root)
entry_value.pack()

# Conversion selection
label_conversion = tk.Label(root, text="Select Conversion Type:")
label_conversion.pack()

combo_conversion = ttk.Combobox(
    root,
    values=["Rupees to Dollars", "Celsius to Fahrenheit", "Inches to Feet"],
    state="readonly"
)
combo_conversion.pack()

# Convert button
button_convert = tk.Button(root, text="Convert", command=convert)
button_convert.pack()

# Result label
label_result = tk.Label(root, text="Result: ", font=("Arial", 12))
label_result.pack()

# Run application
root.mainloop()
