censored_words=["Donkey","role","context","donkey","poem"]
with open("donkeypoem.txt") as fs:
    content =fs.read()

    for word in censored_words:
        content=content.replace(word,"#"*len(word))
    with open("donkeypoem.txt","w") as f:
        f.write(content)

    
