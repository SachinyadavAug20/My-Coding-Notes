a:int= 12
while(a!=0):
    digit=a%10
    a=int(a/10)

a=12  # global variable
print(a)
def fun():
    global a
    a=2 # local variable for this fn, it has more priority then global
    print(a)


print(a)
a=3
print(a)
fun()
print(a)

