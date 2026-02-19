class complex_number:
    def __init__(self,real,img):
        self.real=real
        self.img=img
    def __str__(self):
        return f"{self.real} + {self.img}i"
    def __add__(self,a):
        return complex_number(self.real+a.real,self.img+a.img)
    def __sub__(self,a):
        return complex_number(self.real-a.real,self.img-a.img)
    def __mul__(self,a):
        return complex_number(self.real*a.real-self.img*a.img,self.real*a.img+self.img*a.real)
    def __len__(self):
        return (self.real**2+self.img**2)**0.5

c1=complex_number(1,2)
c2=complex_number(3,6)
print(f"c1 = {c1} and c2 = {c2}")
print(f"c1 + c2 = {c1+c2}")
print(f"c1 - c2 = {c1-c2}")
print(f"c1 * c2 = {c1*c2}")
