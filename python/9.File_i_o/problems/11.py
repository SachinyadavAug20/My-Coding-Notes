from os import remove


with open("renameIt.txt") as fs:
    content=fs.read()
with open("renamed_by_python.txt","w") as f:
    f.write(content)
remove("renameIt.txt")
