l=[1,2,3,4,5]

index=0
for i in l:
    print(f"The item is {i} at index {index}")
    index+=1

# simpied useing enumberate fn
print()

for idex,item in enumerate(l):
    print(f"The item is {item} at index {idex}")

