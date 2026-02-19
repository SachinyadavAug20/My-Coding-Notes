num=int(input("Enter a number : "))
for i in range(1,11):
    print(f"{num} X {i} = {num*i}")
# OR
i=1
while(i<11):
    print(f"{num} X {i} = {num*i}")
    i+=1

# reverse table
print("\n")
i=10
while(i):
    print(f"{num} X {i} = {num*i}")
    i-=1
# OR
temp=num
for i in range(1,11):
    print(f"{num} X {11-i} = {num*(11-i)}")

names=["Harry","Soham","Subham","Rahul"]

for name in names:
    if(name.upper()[0]!="S"):
        continue
    print(f"Good morning, {name}")
