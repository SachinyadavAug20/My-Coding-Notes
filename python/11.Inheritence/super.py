class human:
    biological=True
    def __init__(self):
        super().__init__()
        print("human is spawn")
    a=1

class employee(human):
    def __init__(self):
        super().__init__()
        print("employee is spawn",super().biological)
    b=2

class programer(employee):
    def __init__(self):
        super().__init__()
        print("programmer is spawn")
    c=3

class manager(programer):
    def __init__(self):
        super().__init__()
        print("manager is spawn")
    d=4

o=manager()
print(o.a," ",o.b," ",o.c," ",o.d,"")

b=programer()
print(b.a," ",b.b," ",b.c,"")

c=employee()
print(c.a," ",c.b," ")

d=human()
print(d.a," ")
