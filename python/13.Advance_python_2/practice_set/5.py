from functools import reduce


def min(a,b):
    if(a<b):
        return a
    return b

def max(a,b):
    if(a>b):
        return a
    return b

nums=[123,23,4,235,4,53,5,645,35,2,4,4,23,5,4335,434,3,34,5,5,5,5,2,3,52,5,325,32,23,2,3,235,23,5,32]
maximum=reduce(max,nums)
mimum=reduce(min,nums)
print(nums)
print(maximum)
print(mimum)
