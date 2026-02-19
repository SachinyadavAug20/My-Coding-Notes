# def game():
#     i=int(input("Enter your score"))
#     return i
#
# fs=open("hi-score.txt")
# wfs=open("hi-score.txt","w")
# hScore=int(fs.read())
# score=game()
# if(score>hScore):
#     wfs.write(str(score))
# print(f"High score {hScore}")

import random
def game():
    print("You are playing : ")
    return random.randrange(1,1000)

your_score=game()
print(f"your score {your_score}")

with open("hi-score.txt") as fs:
    content=fs.read()
    if(content==""):
        hiscore=0;
    else:
        hiscore=int(content.strip())


if(hiscore<your_score):
    hiscore=your_score
    with open("hi-score.txt","w") as fs:
        fs.write(str(hiscore))

print(f"current hScore is {hiscore}")
