nums=[13,21,213,213,1,3,13,1,23,211,32,42,43,453,345,34,5,4]
for i in nums:
    print(i)
    if(i==5):
        break
else:
    print("Done naturally without break")

print("\n")
for i in range(0,17):
    if(i==7):
        continue
    print(i)
    if(i==17):
        break
else:
    print("Done naturally without break")

if(21 in nums):
    pass

for j in range(0,91128217): # takes long time with doing nothing
    pass
