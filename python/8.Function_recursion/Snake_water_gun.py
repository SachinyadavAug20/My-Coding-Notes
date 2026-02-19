import random
print("Wellcome to snake water gun")
print("*"*100)
options=["snake","water","gun"]
userChoice=str(input("Enter you choice : "))
computerChoice=options[random.randrange(0,3)]
print("Computer choice ==> ",computerChoice)

if(userChoice=="snake" and computerChoice=="water"):
    print("You won")
elif(userChoice=="water" and computerChoice=="snake"):
    print("You loss")
elif(userChoice=="gun" and computerChoice=="snake"):
    print("You won")
elif(userChoice=="snake" and computerChoice=="gun"):
    print("You loss")
elif(userChoice=="water" and computerChoice=="gun"):
    print("You won")
elif(userChoice=="gun" and computerChoice=="water"):
    print("You loss")
elif(computerChoice==userChoice):
    print("Tie")
else:
    print("Invalid choice")

