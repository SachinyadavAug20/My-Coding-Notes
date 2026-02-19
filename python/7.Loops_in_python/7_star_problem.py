num =int(input("Enter a number : "))

temp=num
# left side star pattern
i=0
while(temp):
    print('*'*(2*i+1))
    i+=1
    temp-=1

temp=num
# cental star pattern
largestODD=2*temp+1 # width of square whose center is to be placed
i=0
while(temp):
    gap=int((largestODD-(2*i+1))/2)-1 # off by 1 issue
    print(' '*gap+'*'*(2*i+1)+' '*gap)
    i+=1
    temp-=1

temp=num
# right side star pattern
largestODD=2*temp+1 # width of square whose center is to be placed
i=0
while(temp):
    gap=int((largestODD-(2*i+1)))-2 # off by 1 issue twice
    print(' '*gap+'*'*(2*i+1))
    i+=1
    temp-=1

temp=num
# fram star pattern
photo_size=temp-2
print("*"*(photo_size+2))
while(temp-2):
    print("*"+" "*photo_size+"*")
    temp-=1
print("*"*(photo_size+2))
