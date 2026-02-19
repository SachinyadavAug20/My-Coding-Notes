spamPharas=["Make a lot of money","buy this","buy now","subscribe this","click this"]
message=str(input("Enter your message : "))
if(spamPharas[0] in message or spamPharas[1] in message or spamPharas[2] in message):
    print("This is spam")
else:
    print("Thanks for message")
print("End of program")
