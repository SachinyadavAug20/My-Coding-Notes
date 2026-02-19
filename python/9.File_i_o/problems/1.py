fs=open("poem.txt")
for l in fs.readlines():
    if("twinkle" in l):
        print("twinkle is present")
    else:
        print("twinkle not in this line")
fs.close()

