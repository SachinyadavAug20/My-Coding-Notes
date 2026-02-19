def greet(name="user",ending="Thank you"):  # default parameter
    print(f"Good morning, {name}")
    print(ending)
    return "done"

def helloworld():
    print("Hello world")

a=greet()
print(a,helloworld())
greet("Harry")
greet("Rohan","Go to hell")
