print(input("What is your name? \n"))

a = input("Type in a phrase: \n")
b = input("Type in a whole number: \n")
c = input("Type in a decimal number: \n")
d = input("Type in 'True' or 'False': \n")

print(a, "\n", type(a))
print(b, "\n", type(b))
print(c, "\n", type(c))
print(d, "\n", type(d))

b = int(b)
c = float(c)
d = bool(d)

print(a, "\n", type(a))
print(b, "\n", type(b))
print(c, "\n", type(c))
print(d, "\n", type(d))