# To avoid programm crash even if there is error
def main():
    try:
        a:int=int(input("Enter a number : "))
        b:int=int(100/a)    # create zerodivisionError 
    except ValueError as v:
        print(f"ERROR : {v}")
        print("Value is errored somehow")
        return "ValueError"
    except ZeroDivisionError as Z:
        print(f"ERROR : {Z}")
        print("Infinity is not same as undefined")
        return "ZeroDivisionError"
    except Exception as Error:
        print(f"ERROR : {Error}")
        print("Plz enter a vaild number")
        return "SomeotherError"
    else:      # excutes when try ran successfully
        print("Success full got he number")
        return b
    finally:   # excutes at the end fail or pass the try , excutes regardless of error regarless if it has retured(It stored it and remembers to except)
        print("Thank you")
    print("Program ended")   # this will never run as program will return

print(main())
