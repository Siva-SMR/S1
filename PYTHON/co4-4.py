class Time:
    def __init__(self,hour,minute,second):
        self.__hour=hour
        self.__minute=minute
        self.__second=second
    def __add__(self,val):
       h=self.__hour+val.__hour
       m=self.__minute+val.__minute
       s=self.__second+val.__second
       if m>=60:
           h+=1
           m-=60
       if s>=60:
           m+=1
           s-=60
       if h>=24:       
           h=1
       return str(h)+":"+str(m)+":"+str(s)
t1=Time(11,30,15)
t2=Time(12,45,20)
print(t1 + t2)
