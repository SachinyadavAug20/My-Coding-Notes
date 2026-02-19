import os
# declare a variable to store the directory_path
directory_path='/'
# make an array of string of folders and file name in the directory_path
content =os.listdir(directory_path)
# use for each loop to print all elememts in the ablove array in a new line
print(content)
for item in content:
    print(item)
