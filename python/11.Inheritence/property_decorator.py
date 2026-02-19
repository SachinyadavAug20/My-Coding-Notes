class employee:
    a=1
    @classmethod
    def show(cls,self):
        print(f"Value of class attribute a is {cls.a}")
        print(f"Value of instaneous attribute a is {self.a}")

    @property
    def name(self):
        return f"{self.Fname} {self.Lname}"
    @name.setter
    def name(self,value):
        self.Fname=value.split(" ")[0].upper()
        self.Lname=value.split(" ")[1].upper()

e=employee()
e.name="harry khan"
print(e.name)
print(e.Fname)
print(e.Lname)

