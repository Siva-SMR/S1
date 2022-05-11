import csv
#l1=[]
with open("f.csv") as csvfile:
    file=csv.reader(csvfile)

    for row in file:
#        l1.append(row)
        print(row)


#print(l1)
        
