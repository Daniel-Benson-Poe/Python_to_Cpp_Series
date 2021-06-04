print(True)
print(False)

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

