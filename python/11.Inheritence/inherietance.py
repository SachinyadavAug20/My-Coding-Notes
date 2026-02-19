class human():
    def walk(self):
        print("walking")
    def eat(self):
        print("eating")

class employeee(human):
    company="ITC"
    def show(self):
        print(f"name : {self.name} and slary is {self.salary}")
    def __init__(self,name,salary) :
        self.salary=salary
        self.name=name

class coder:
    language="py"
    def printlan(self):
        print(f"your language is {self.language}")


class programer(employeee,coder):
    def __init__(self,language,name,slary) :
        self.language=language
        self.salary=slary
        self.name=name
    def showlanguage(self):
        print(f"{self.name} is good at language is {self.language}")

a=employeee("harry",1212)
b=programer("Java","rohan",45554)
print(a.company,b.company)
a.show()
b.show()
b.showlanguage()
b.walk()
a.walk()
b.printlan()
