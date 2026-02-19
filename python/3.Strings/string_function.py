a="sachin suresh chandra sachin yadav"
print(a)
print(len(a))
print(a.endswith("av"))  #true
print(a.startswith("Sa")) # false as casesensitive
print(a.startswith("sa")) # true
print(a.count("a"))  # 3
print(a.capitalize())  # Sachin yadav
print(a.lower())  # sachin yadav
print(a.upper())  # SACHIN YADAV
print(a.find("suresh"))  # gives the first index of this word 7
print(a.find("i"))  # gives the first index of this word 4
print(a.replace("sachin","rohan"))  # replace all instance of that word
print("123".isdigit())  # true
print("   \n \t".isspace())   # true
