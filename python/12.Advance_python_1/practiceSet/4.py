print("Division")
try:
    a:int=int(input("First number : "))
    b:int=int(input("second number : "))
    result=a/b
except ZeroDivisionError as z:
    print("infinity")
except Exception as e:
    print(f"ERROR : {e}")
else:
    print(result)
finally:
    print("Programm ended")
