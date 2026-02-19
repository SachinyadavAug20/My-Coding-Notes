seven=[]
# OR WAY
eight=[str(8*i) for i in range(1,11)]
for i in range(1,11):
    seven.append(str(7*i))

print(seven)
table_of_seven="\n".join(seven)
print(table_of_seven)
