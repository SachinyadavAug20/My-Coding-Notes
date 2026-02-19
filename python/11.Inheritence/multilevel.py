class human:
    def __init__(self):
        print("human is spawn")
    a=1

class employee(human):
    b=2

class programer(employee):
    c=3

class manager(programer):
    d=4

o=manager()

print(o.a,"\n",o.b,"\n",o.c,"\n",o.d)

