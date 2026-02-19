def digit_to_word(a:int) -> str:
    match (a):
        case 1:
            return "One"
        case 2:
            return "Two"
        case 3:
            return "Three"
        case 4:
            return "four"
        case 0:
            return "Zero"
        case 5:
            return "Five"
        case 6:
            return "Six"
        case 7:
            return "Seven"
        case 8:
            return "Eight"
        case 9:
            return "Nine"
    return "Invalid"

a:int=int(input("Enter a number : "))
while(a!=0):
    digit:int=a%10
    a=int(a/10)
    print(digit_to_word(digit),end=" ")
