import re


class number:
    def __init__(self,a,b):
        self.a=a
        self.b=b
    def __add__(self,num):
        return number(self.a+num.a,self.b+num.b)
    def __str__(self):
        return f"({self.a},{self.b})"
    def __len__(self):
        return self.a+self.b

N=number(2,3)
M=number(5,5)
print(f"{N} + {M} = {M+N}")
print(f"{len(N)} + {len(M)} = {len(M+N)}")
