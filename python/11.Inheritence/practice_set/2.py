class Animal:
    def __init__(self,alive):
        self.alive=alive

class pet(Animal):
    def __init__(self,name):
        self.name=name

class dog(pet):
    def __init__(self,name,brid):
        super().__init__(name)
        self.brid=brid
    @staticmethod
    def bark():
        print("Bho bho ...")

seru=dog("seru","wolf")
seru.bark()


