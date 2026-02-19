PMarks=int(input("Enter marks of p : "))
CMarks=int(input("Enter marks of C : "))
MMarks=int(input("Enter marks of M : "))
# to pass need 40% overall and 33% in each subject
overallPrecent=(PMarks+CMarks+MMarks)/3

if(overallPrecent>=40 and PMarks>=33 and CMarks>=33 and MMarks>=33):
   print("Passed")
else:
   print("Failed")
