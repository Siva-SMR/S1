print("(a)")
l=[-1,2,3,-4,-5,6,7,8,-9,-10]
m=[x for x in l if x>0]
print("positive list of numbers: ",m)
print("(b)")
c=int(input("enter the limit"))
n={x:x**2 for x in range(1,c+1)}
print("square of number",n)
print("(c)")
v=["a","e","i","o","u"]
s=input("enter a string")
o=[x for x in s if x in v]
print("vowels: ",o)
print("(d)")
for x in s:
    print(x,":",ord(x))
