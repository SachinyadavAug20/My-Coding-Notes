class student:
    langauge = "py"
    salary = -100000
    def getinfo(self):
        print(f"he is a {self.langauge} developer with salary of {self.salary}")
    def greent(self):
        print("Good morning")
    @staticmethod # it declare the below fn don't need a self parameter
    def NoNeedOfSelf():
        print("I don't need self")
    def really(self):
        print("Really")

Rohan=student()
Rohan.greent()
Rohan.getinfo()   # as Rohan.getinfo() ==> student.getinfo(Rohan)
Rohan.langauge="Rust"
student.getinfo(Rohan)  # Same as above

Rohan.NoNeedOfSelf()
student.NoNeedOfSelf()
