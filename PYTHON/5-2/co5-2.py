file1=open("file1.txt","r")
file2=open("newfile.txt", "w")
list1=file1.readlines()
print("\nInitial File\n")
for i in range(len(list1)):
    print(i+1,list1[i])

for i in range(len(list1)):
    if  i%2==0:
        file2.write(list1[i])

file2=open("newfile.txt", "r")
list2=file2.readlines()
print("\nNew File\n")
for i in range(len(list2)):
    print(i+1,list2[i])
    
file1.close()
file2.close()
