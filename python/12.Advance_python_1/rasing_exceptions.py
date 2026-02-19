try:
    a1:int =int(input("Enter a number1 : "))
    a2:int =int(input("Enter a number2 : "))
    a3:int =int(input("Enter a number3 : "))

    if(a3==0):
        raise ZeroDivisionError("Our program can't divid by zero")
    else:
        print(f"The division a*b/c is {a1*a2/a3}")
except ValueError as z:
    print(f"ERROR Enter only int : {z}")
except Exception as E:
    print(E)

print("Program ended")
