# Copy files
with (open("test1.txt","r") as f1, open("test2.txt","a") as f2):
    data=f1.read()
    f2.write(data)

