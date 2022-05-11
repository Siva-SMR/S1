class rectangle:
    def __init__(self,length,breadth):
        self.length=length
        self.breadth=breadth
    def area(self):
        return self.length*self.breadth
    def peri(self):
        return 2*(self.length+self.breadth)
l1=int(input("Enter the Length of first Rectangle "))
b1=int(input("Enter the Breadth of first Rectangle "))
l2=int(input("Enter Length of second Rectangle "))
b2=int(input("Enter Breadth of second Rectangle "))
r1=rectangle(l1,b1)
r2=rectangle(l2,b2)
print("Area of Rectangle one ",r1.area())
print("Area of Rectangle two ",r2.area())
print("Perimeter of Rectangle one ",r1.peri())
print("Perimeter of Rectangle two ",r2.peri())
if(r1.area()<r2.area()):
    print("Area of Rectangle one is Smaller than the Second one")
elif(r1.area()==r2.area()):
    print("Area are Equal")
else:
    print("Area of Rectangle one is Larger than the Second one")

