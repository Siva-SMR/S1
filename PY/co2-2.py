n= int(input("how many terms"))
x=0
y=1
first=0
print("fibonacci series:")
while first < n:
    print(x)
    nth= x+y
    x=y
    y=nth
    first +=1
