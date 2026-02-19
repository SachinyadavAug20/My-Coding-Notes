a=21
b=12
c=13
avg=(a+b+c)/3
print(avg)

def avg(a,b,c):
    return (a+b+c)/2

print(avg(21,34,26))

def tableof(a):   # function defination
    i=1
    while(i<=10):
        print(f"{a} X {i} = {a*i}")
        i+=1
    print("*************************************************************")

tableof(int(input("Enter a number : ")))   # function call
