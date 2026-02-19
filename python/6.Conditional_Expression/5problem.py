name=str(input("Enter name : "))
listofnames=["harry","rohan","om","sachin"]
if(name in listofnames):
    print("Your name is in list")
else:
    print("Your name is not in list")

commet=str(input("Enter your comment : "))
if(listofnames[0].lower() in commet.lower() or listofnames[1].lower() in commet.lower() or listofnames[2].lower() in commet.lower() or listofnames[3].lower() in commet.lower() ):
    print("your comment has name from the list")
else:
    print("Your comment is normal")
print("Thanks for comments")
