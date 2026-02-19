sentence=input("Enter a sentence : ")
print(f"No of spaces are {sentence.count(" ")}")
print(f"No of tabs are {sentence.count("\t")}")

#need double space
print(f"No of double space {sentence.count("  ")}")

# OR
print("Index of double space ",sentence.find("  ")) # gives -1 for not found
print(f"Are the double space : {sentence.find("  ")!=-1}")

print(f"Correct for \"{sentence.replace("  "," ")}\"")
