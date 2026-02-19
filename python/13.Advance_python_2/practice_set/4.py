nums=[123,23,4,235,4,53,5,645,35,2,4,4,23,5,4335,434,3,34,5,5,5,5,2,3,52,5,325,32,23,2,3,235,23,5,32]
def div_by_5(n):
    if(n%5==0):
        return True
    return False

nums5=filter(div_by_5,nums)
print(nums)
print(list(nums5))
