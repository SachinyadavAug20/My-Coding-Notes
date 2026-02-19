from typing import List
from functools import reduce


# MAP
fn_to_square=lambda x:x**2
nums:List[int]=[1,2,3,4,5,6,7,8,9,10]

squares:List[int]=list(map(fn_to_square,nums))

print(nums)
print(squares)

# FILTER
def even(n):
    if n%2==0:
        return True
    else:
        return False

even_number=list(filter(even,nums))
print(even_number)

# REDUCE
sum=lambda x,y:x+y
def product(x,y):
    return x*y
sum_of_nums=reduce(sum,nums)
product_of_nums=reduce(product,nums)
print(sum_of_nums,product_of_nums)
