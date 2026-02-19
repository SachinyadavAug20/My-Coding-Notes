# check log files has word "Python"
word="Python"
with open("log.txt","r") as f:
    content=f.read()
    havePy=content.find(word,0,len(content))
    print(not(havePy==-1))

#find line number of "Python"
with open("log.txt","r") as f:
    content=f.readlines()
    i=1
    for line in content:
        if(line.find(word,0,len(line))!=-1):
            print(f"{word} is in line number {i}")
        i+=1


