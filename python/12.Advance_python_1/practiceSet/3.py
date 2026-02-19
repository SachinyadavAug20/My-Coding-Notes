base=[1,2,3,4,5,6,7,8,9,10]
num:int=int(input("Enter a number : "))
# tableof_num=[i*num for i in base]
# OR WAY
tableof_num=[i*num for i in range(1,11)]
print(tableof_num)


with open("table.txt","a") as f:
    # for i in tableof_num:
    #     f.write(f"{i}\n")
    f.write(f"Table of {num} "+str(tableof_num))
    f.write("\n")

