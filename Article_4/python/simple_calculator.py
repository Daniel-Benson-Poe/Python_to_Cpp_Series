### Calculator used for simple calculations; addition, 
# subtraction, multiplication, division, and remainder

print("Welcome to the basic calculator!")
print("You will first choose two numbers")
print("Then you will tell me what calculation you")
print("wish to perform on those two numbers by")
print("typing in the symbol corresponding to that calculation")
print("For instance if you wanted to add the numbers 2 and 4 together")
print("you would give me the number 2 and 4")
print("then when prompted give me the symbol '+'.")
print("After a quick behind-the-scenes calculation")
print("I will give you the answer.")
# Start by gathering user input
print("Input your first number here: ")
num_1 = int(input())
# Get user's second number
print("Input your second number here: ")
num_2 = int(input())
# Get user's desired calculation
print("Insert the symbol corresponding to your desired calculation")
print("using the symbols +, -, /, or *: ")
c = input()
# calculate the user's request
if c == '+':
    calc = num_1 + num_2
elif c == '-':
    calc = num_1 - num_2
elif c == '/':
    calc = num_1 / num_2
elif c == '*':
    calc = num_1 * num_2
else:
    print("You entered an invalid character, please try again...")
    quit()
print(calc)

