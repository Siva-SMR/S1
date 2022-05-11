import math

t_area=lambda b,h:1/2*(b*h)
r_area=lambda l,b:l*b
s_area=lambda a:a*a

c=int(input("Enter breath of triangle "))
f=int(input("Enter height of triangle"))
print("Area of triangle ",t_area(c,f))
u=int(input("Enter length of rectangle "))
v=int(input("Enter breath of rectangle"))
print("Area of rectangle ",r_area(u,v))
w=int(input("Enter value "))
print("Area of square ",s_area(w))
