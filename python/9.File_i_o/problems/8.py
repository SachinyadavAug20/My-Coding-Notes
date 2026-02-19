# copy a file

# file to Copy
with open("poem.txt","r") as fs:
    content=fs.read()
# past file
with open("poem_copy.txt","w") as fs:
    fs.write(content)
