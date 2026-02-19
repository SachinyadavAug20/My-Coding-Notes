class employee:
    def __init__(self,name,position,salary):
        self.name=name
        self.position=position
        self.salary=salary
        self.increment=20

    @property
    def salaryafterincrement(self):
        return (self.salary(1+self.increment))

    @salaryafterincrement.setter
    def salaryafterincrement(self,salary):
        self.increment=((salary/self.salary)-1)*100

    def show(self):
        print(f"{self.name} is a {self.position} with a salary of {self.salary} with increment {self.increment}")


e1=employee("Harry","devloper",12000)
e1.show()
e1.salaryafterincrement=15000
e1.show()
