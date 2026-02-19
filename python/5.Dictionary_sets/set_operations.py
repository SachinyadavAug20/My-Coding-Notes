s={28.2,82,"harry",292}
print(s,len(s))
s.remove("harry")
print(s)
s.pop() # remove random element as set is unordered
print(s)

a={1,2,3,4,5}
b={2,4,6,8,10}
print("a : ",a,", b : ",b)
print("a U b : ",a.union(b))  # a U b
print("a ∩ b : ",a.intersection(b))  # a ∩ b
print("a Δ b : ",a.symmetric_difference(b)) # a Δ b
print("a - b : ",a.difference(b))  # a - b
print("b - a : ",b.difference(a))  # b - a
