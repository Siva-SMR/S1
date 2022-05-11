print("enter 3 numbers")
a=float(input())
b=float(input())
c=float(input())
if ((a<c)and(b<c)):
    print("greatest number: ",c)
elif((a>c)and(a>b)):
    print("greatest number: ",a)
else:
    print("greatest number: ",b)
