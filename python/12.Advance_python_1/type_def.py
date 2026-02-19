from typing import List,Tuple,Dict,Union

n:int=4 # defined n as an integer
print(n.to_bytes,"\n",n.as_integer_ratio,"\n",n.bit_count,"\n",n.is_integer)

name="hjsh"
name=21893

usrname:str="harry"
# usrname=23232 # error 

def addition(a:int,b:int)->int:
    return a+b

print(addition(21,12))


numbers:List[int]=[1,2,3,4,5,6,6,7,4,7,8,5,4,2]
person:Tuple[str,int]=("Harry",1231)
something:Tuple[int,int,int,int]=(31,13,131,13)
condition:Dict[str,bool]={"refresh":False,"DataLeak":True,"SamStopman":False,"ClosedAI":True}

# a union is what can hold multple type of data
id:Union[str,int]="Jsh2@3h@23k"
id="jdk3k2jd3" # valid
id=121232 # valid
