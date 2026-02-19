def myfunc():
    print("Hello world")

print(__name__) # print name of this file module in any file where it is imported  if ran here it print __main__
if(__name__=="__main__"):
    print("Hii secret message code is directly excuted by its own file") # code is directly excuted by its own file

print("Hello good day")
