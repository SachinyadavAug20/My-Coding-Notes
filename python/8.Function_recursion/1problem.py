def greatestOfThree(a,b,c):
    l=[a,b,c]
    l.sort()
    print("Largest is ",l[len(l)-1])

greatestOfThree(12,22,45)

def CtoF(a):
    return round((a*9/5 + 32),3)

print(f"temp in {20}C in {CtoF(20)}F")

print("Hello world",end="\t")
print("Hello world",end="@")
print()

# sum of n natural numbers
def sumOfNnaturals(a):
    if(a==0):
        return 0
    return a+sumOfNnaturals(a-1)

print("Sum of 50 naturals is ",sumOfNnaturals(50), sumOfNnaturals(50)==(50*51/2))

