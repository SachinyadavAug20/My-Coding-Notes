# tuple is immutable list
a=() #empty
b=(1,False,23.2,"harry",23.2,"hello")
print(b)
# b[1]=True ==> error as tuple is immutable
print(b[1])
print(type(b))
print(type((3))) # is int incorrect signal element tuple
print(type((3,)))  # is tuple correct singal element tuple
print(b.count(23.2))
print(b.index(False))  # will return first occurance index of False
