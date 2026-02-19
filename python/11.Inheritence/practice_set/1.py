class vector_2D:
    def __init__(self,i,j):
        self.i=i
        self.j=j
    def __add__(self,a):
            return vector_2D(self.i+a.i,self.j+a.j)
    def __sub__(self,a):
            return vector_2D(self.i-a.i,self.j-a.j)
    def __str__(self):
            return f"({self.i},{self.j})"
    def __len__(self):
            return int((self.i**2+self.j**2)**0.5)
    def __mul__(self,a):
            return (self.i*a.i+self.j*a.j)

class vector_3D(vector_2D):
    def __init__(self,i,j,k):
        super().__init__(i,j)
        self.k=k
    def __add__(self,a):
            return vector_3D(self.i+a.i,self.j+a.j,self.k+a.k)
    def __sub__(self,a):
            return vector_3D(self.i-a.i,self.j-a.j,self.k-a.k)
    def __str__(self):
            return f"({self.i},{self.j},{self.k})"
    def __len__(self):
            return int((self.i**2+self.j**2+self.k**2)**0.5)
    def __mul__(self,a):
            return (self.i*a.i+self.j*a.j+self.k*a.k)

p1=vector_2D(1,2)
p2=vector_2D(2,3)
print("vectors are as follows ",p1,p2)
print("lengthing of vectors ",len(p1),len(p2))
print("sum ",p1+p2)
print("diff ",p1-p2)
print("dot ",p1*p2)

p1=vector_3D(1,2,1)
p2=vector_3D(2,3,2)
print("vectors are as follows ",p1,p2)
print("lengthing of vectors ",len(p1),len(p2))
print("sum ",p1+p2)
print("diff ",p1-p2)
print("dot ",p1*p2)
