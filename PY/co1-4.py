s1=input("Enter the string : ")
s2=s1.split( )
d={}
for i in s2:
    if i in d:
       d[i.lower()]+=1
    else:
        d[i.lower()]=1
print(d)
