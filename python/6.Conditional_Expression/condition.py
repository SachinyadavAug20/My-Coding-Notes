age =int(input("Enter your age : "))

if(age>0 and age<100):
    print("You are {age-100} year older than 100")
elif(age>18):
    print("You are 18+")
    print(f"You are is {age-18} older than 18")
elif(age<0):
    print("Invalid age")
    print(f"as {age}<0")
elif(age==0):
    print("Are you sure your age is ZERO")
else:
    print(f"You are {age} toodler")
print("End of programm")
