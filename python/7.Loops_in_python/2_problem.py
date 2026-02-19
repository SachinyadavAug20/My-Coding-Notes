num=int(input("Enter a number : "))

# check prime
factors=0
for i in range(2,num): # check from 2 to num
    if(num%i==0):
        factors+=1
        break
if(not factors):
    print("It is prime")
else:
    print("Not prime")

# sum of n natural numbers using loop (not n(n+1)/2)
sum =0
for i in range(1,num+1):
    sum+=i
print(f"Sum of first {num} naturals is {sum} is {sum==(num*(num+1)/2)}")

# factorial
fact=1
for k in range(1,num+1):
    fact*=k
print(f"{num}! = {fact}")
