with open("1.txt") as fs:
    content1=fs.read()
with open("2.txt") as fs:
    content2=fs.read()
if(content1==content2):
    print("Files have same content")
else:
    print("Different content")

# clear both files

with open("1.txt","w") as fs:
    fs.write("")
with open("2.txt","w") as fs:
    fs.write("")
