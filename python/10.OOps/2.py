class calculator:
    def __init__(self,num1):
        self.num1=num1
    def square(self):
        print(self.num1**self.num1)
        return self.num1**self.num1
    def cube(self):
        print(self.num1*self.num1*self.num1)
        return self.num1*self.num1*self.num1
    def sqrt(self):
        print(self.num1**(0.5))
        return self.num1**(0.5)
    @staticmethod
    def greet():
        print("Hello user")

operation1=calculator(7)
operation1.greet()
print(f"Number is 7")
operation1.sqrt()
operation1.cube()
operation1.square()
