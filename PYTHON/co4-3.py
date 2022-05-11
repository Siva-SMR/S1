class Rectangle:
    def __init__(self,length,breadth):
        self.__length=length
        self.__breadth=breadth
        self.area=self.__length*self.__breadth
    def __lt__(self,val):
        return self.area < val.area
r1=Rectangle(15,30)
r2=Rectangle(20,40)
if(r1<r2):
    print("Rectangle 1 is smaller")
else:
    print("Rectangle 2 is greater")

