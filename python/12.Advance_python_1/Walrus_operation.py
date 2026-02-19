if ((n:=len([1,2,3,4,5]))>3):
    print(f"List is too long ({n} elements, expected <=3)")

# Same AS
p=[1,2,3,4,5]
n=len(p)
if n>3:
    print(f"List is too long ({n} elements, expected <=3)")




line=str(input("Enter a line (or exit to exit ) : "))
while (line!="exit"):
    print(f"line is {line}")
    line=str(input("Enter a line (or exit to exit ) : "))

# other implemenation
while(line:=input("Enter a line or exit to exit : ")!="exit"):
    print(f"Line is {line}")
