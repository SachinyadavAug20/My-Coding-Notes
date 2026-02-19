class employee:
    a=1
    @classmethod
    def show(cls,self):
        print(f"Value of class attribute a is {cls.a}")
        print(f"Value of instaneous attribute a is {self.a}")

e=employee()
e.a=12
e.show(e)
