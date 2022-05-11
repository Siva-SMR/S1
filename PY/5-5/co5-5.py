import csv

field=['Name','Mark']
dict_data=[
    {'Name':'Siva','Mark':28},
    {'Name':'Arun','Mark':30},
    {'Name':'Ajil','Mark':30},
    {'Name':'Kannan','Mark':30},
    ]

with open ('dict.csv','w')as csvwrite:
    write=csv.DictWriter(csvwrite,fieldnames=field)
    write.writeheader()
    write.writerows(dict_data)

with open ('dict.csv') as csvread:
    read=csv.DictReader(csvread)
    for row in read:
        print(row)
        
