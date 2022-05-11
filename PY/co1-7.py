l1=[2,4,1,3,5,8,9]
l2=[4,6,0,6,8]
s=len(l1)==len(l2)
p=sum(l1)==sum(l2)
print("length are same",s)
print("sum are equal",p)
m=[i for i in l1 if i in l2]
print("commonm elemts are: ",m)      
