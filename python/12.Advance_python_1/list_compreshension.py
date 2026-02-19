l1=[1,2,3,4,5,67,8,10,91]
# l2=[i for item in l1 if item>10]
squaredlist=[]

for i in l1:
    squaredlist.append(i*i)
print(l1,"\n",squaredlist)

# OR way
squaredlistnew=[i*i for i in l1]
bignums=[i for i in l1 if i>8]
print(l1,"\n",squaredlistnew,"\n",bignums)

