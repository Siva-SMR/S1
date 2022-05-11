import csv

i=input("Enter the column name")
with open('f1.csv') as csvfile:
    file=csv.DictReader(csvfile)
    for row in file:
        print(row[i])
