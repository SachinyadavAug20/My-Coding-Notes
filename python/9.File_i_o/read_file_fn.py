fs=open("file.txt")
print(fs.readline())
print("#"*60)
print(fs.readlines())
fs.close()

# it remembers the line readed so need to reopen to read from start
fs=open("file.txt")
print(fs.readlines())
fs.close()

print()
fs=open("file.txt")
line=fs.readline()
while(line!=""):
    print(line)
    line=fs.readline()
fs.close()
