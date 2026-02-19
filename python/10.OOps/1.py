class programmer:
    company="Microsoft"
    def __init__(self,name,salary,picode):
        self.name=name
        self.salary=salary
        self.pincode=picode
    def getinfo(self):
        print(f"{self.name} works at {self.company} on a salary {self.salary} at a pincode of {self.pincode}")

P1=programmer("Harry",237321,"Haj2dj82#")
P1.getinfo()
