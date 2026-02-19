class employee:  # declare of class
    name="Employee"
    language="js"
    salary=300000
    age =21


harry=employee()  # made an object of this class initilization
harry.name="harry Dash"
# harry.work_expl="Not found" objects attribute is not allowed only have class objects
harry.salary-=1
print(harry,type(harry))
print(harry.name,harry.language,harry.salary,harry.age)
