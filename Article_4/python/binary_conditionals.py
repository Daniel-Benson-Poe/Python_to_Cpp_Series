# Boolean Values
print(True)
print(False)

# basic condition statements
print(13 == 13)
print(13 == 12)
print(13 != 13)
print(13 != 12)
print(13 < 13)
print(13 < 14)
print(13 > 13)
print(13 > 12)
print(13 <= 13)
print(13 <= 12)
print(13 >= 13)
print(13 >= 14)
print(13 == 13)
print(13 == "Today")
print(13 != "Today")

panda1 = "Greg"
panda2 = panda1
panda3 = "Mike"
print(panda1 is panda2)
print(panda1 is panda3)
print(panda2 is not panda3)

# Conditional Statements
a = True
b = False

if a == True:
    print("Hello readers")
else:
    print("a not true")

if b == True:
    print("Hello again readers")
else:
    print("b not true")

c = 5

if c > 10:
    print("c is greater than 10")
elif c > 5:
    print("c is greater than 5 but less than 10")
elif c > 0:
    print("c is greater than 0 but less than 5")
else:
    print("c is a negative number")

print("input any number you want")
d = int(input())

if d > 1000:
    print("d is greater than 1000")
elif d > 500:
    print("d is greater than 500 but less than 1000")
elif d > 100:
    print("d is greater than 100 but less than 500")
elif d > 0:
    print("d is greater than 0 but less than 100")
else:
    print("d is a negative number")

# Complex conditional statements
e = 200
f = 6
    
if e < 500 and e > 100:
    print("e is between 100 and 500")
elif e < 100 and e > 0:
    print("e is between 0 and 100")

elif e < 0:
    print("e is negative")
    
if f > 100 or f < 0:
    print("f is either greater than 100 or is a negative number")
elif f < 100 or f > 0:
    print("f is either less than 100 or is a positive number")