name=input("Enter your name : ")
date=input("Enter your date : ")
print("Good afternoon,",name)
print(f"Good afternoon, {name}")

letter=f'''
Dear {name},
You are selected!
{date}
'''
print(letter)

# OR WAY
letter2="""
Dear <name>,
You are selected!
<date>
"""
print(letter2.replace("<name>",name).replace("<date>",date))
