file=open('file.txt')
list1=file.readlines()
#print(list)
for i in range(len(list1)):
    print(i+1,list1[i])
#    print(list[i])
read.close()
