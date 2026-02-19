for skid in range(1,2):
    i=2
    while(i<=20):
        j=1
        with open(f"tables/table_{i}.txt","a") as fs:
            while(j<=10):
                fs.write(f"{i} X {j} = {i*j}")
                fs.write("\n")
                j+=1
            fs.write("\n")
        i+=1
