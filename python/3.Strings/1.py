print("Hello string")

name="Sachin yadav"
print(name[-2])
print(name[-10])
print(name[1])
print(name[0]==name[-len(name)])  #true
print(name[1]==name[-11])  #true
print(name[2]==name[-10])  #true
print(name[11]==name[-1])  #true

nameShort=name[0:6]  #including 0 excluding 6 all index
print(nameShort)


