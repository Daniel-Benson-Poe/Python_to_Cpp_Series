# Basic function that prints out hello world
def hello_world():
    print("Hello world")

hello_world() # Call to the hello_world function
print("Seperating code here...")
hello_world() # 2nd call to the hello_world function

# Function that gather's a user's name
def gather_user_name():
    print("What is your name?")
    name = input()
    return name

# Save the results of calling gather_user_name into a variable
name = gather_user_name()
# Print out the user's name
print(f"Your name is {name}!")

# We can call a function within another function
def print_user_name():
    name = gather_user_name()
    print(f"Your name is {name}!")

print_user_name()

# We can also pass in a parameter to a function for use within the function
def print_user_name(name):
    print(f"Your name is {name}!")

name = gather_user_name()
print_user_name(name)

# We can use multiple parameters within a function
def find_sum(num1, num2):
    return num1 + num2

def find_difference(num1, num2):
    return num1 - num2

print(find_sum(5, 7))
print(find_difference(7, 5))

def print_info(name, age, location="Unknown"):
    print(f"Hello, your name is {name}...")
    print(f"You are {age} years old...")
    print(f"and you are from {location}...")

print_info("Daniel", 32)
print_info("Daniel", 32, "Utah")