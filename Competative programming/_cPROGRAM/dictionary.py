words=set() # values 

def unfinishedFn():
    ...

def check(word):
    if word.lower() in words: # handles lower uppercase and checks for each word in words
        return True
    else:
        return False

def load():
    try:
        with open("dictionary.txt","r") as dict:
            for line in dict:
                line=line.rstrip()
                words.add(line)
    except FileNotFoundError:
        print("File not found")
    except Exception as e:
        print("Error :",e)

def size():
    return len(words);

def unload():
    # as memory free is done already by python
    return True 

print('asdfghjk'=='ASDFGHJK')
print('asdfghjk'=='ASDFGHJK'.lower())
load()
print(words)
print(size())
