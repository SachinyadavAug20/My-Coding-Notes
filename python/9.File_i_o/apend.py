fs=open("table.txt","a")
n=int(input("Ente a number : "))
i=1
while(i<=10):
    print(f"{n} X {i} = {n*i}")
    fs.write(f"{n} X {i} = {n*i}\n")
    i+=1
    
fs.write("\n")
fs.close()
