from typing import Dict


Oldname:Dict[str,str]={"Harry":"CEO","Rohan":"CTO"}
NEWname:Dict[str,str]={"Magan":"Programmer","Sachin":"Designer"}


print(Oldname)
print(NEWname)
# name=Oldname+NEWname   # ERROR 
name=Oldname|NEWname
print(name)
