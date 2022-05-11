num=int(input("Enter limit"))
for i in range(1,num+1):
    for j in range(1,i+1):
        print("*",end='')
    print("\n")
for i in range(num+1,0,-1):
    for j in range(1,i+1):
        print("*",end='')
    print("\n")
