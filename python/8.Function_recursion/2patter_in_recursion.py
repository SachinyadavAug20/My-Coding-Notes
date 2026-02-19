def starpattern(n):
    if(n==0):
        return
    else:
        print("*"*n)
        return starpattern(n-1)

n=int(input("Enter a number : "))
starpattern(n)

def rem(l,word):
    n=[]
    i=0
    for i in l:
        if(not i==word):
            n.append(i.strip(word))
    return n

l=["harry","rohan","subham","subhan","an"]
print(l)
print(rem(l,"an"))
