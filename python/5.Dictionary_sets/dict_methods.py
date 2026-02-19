marks={
    "hello":29,
    "Merry":"chrismas",
    "Cool":"boi",
    23:"twenty three",
    "list":[871,18,91]
}
print(marks)
print(marks.items()) # .items give a key value tuple of all members of dict
print(marks.keys()) # gives keys
print(marks.values()) # gives values
marks.update({"hello":30,"Harry":918})
print(marks)
print(marks.get("Harry2")) # give none if no such key
print(marks["Harry"]) # give error for if no such key
