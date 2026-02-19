friends=[23,True,"Appled",23.2]
print(type(friends))
print(friends)
print(friends[2])
friends[2]="apple" # unlike string, list is mutable
print(friends[2])
print(friends[-2]) # same indexing as string logic
print(friends[-2]==friends[len(friends)-2]) # same indexing as string logic is ==> true

# slice logic is same
print("main list ",friends)
print("main sliced[1:2] ",friends[1:2])
print("main sliced[:3] ",friends[:3])
print("main sliced[1:] ",friends[1:])
print("main sliced[0::1] ",friends[0::1])
print("main sliced[0::2] ",friends[0::2])
