s=set() # no repetition allowed
s.add("harry")
s.add(23)
s.add(92)
s.add(92) # duplicate auto removed
print(s,type(s))

a={} # it is emplty dictionary
b=set() # empty set
c={1,34,5,"hello",6,7,7} # set
print(type(b),type(c),type(a))
