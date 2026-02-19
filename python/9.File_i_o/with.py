fs=open("file.txt")
print(fs.read())
fs.close()

# f.close() is problematic
# can write same with statnment
with open("file.txt") as f:
    print(f.read())
# here, explicitly don't have to close the file
