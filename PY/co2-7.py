s=input("Enter string")
if(s[-3:]=="ing"):
    s=s[:]+'ly'
else:
    s=s[:]+'ing'
print(s)
