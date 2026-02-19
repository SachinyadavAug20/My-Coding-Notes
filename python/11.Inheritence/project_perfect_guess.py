import random
print("*"*40," Guess number btw 1-100 ","*"*40)
computer=random.randrange(1,100)


user_guess=int(input("Enter your guess : "))
n=1
while(computer!=user_guess):
    if(user_guess>computer):
        print("try lesser")
    elif(user_guess<computer):
        print("try greater")
    user_guess=int(input("Enter your guess : "))
    n+=1

print(f"You won in {n} tries")
print("*"*45," Thanks for playing ","*"*45)
