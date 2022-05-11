import datetime
year= int (input("nter the final year"))
tyear=datetime.datetime.now().year
for year in range(tyear,year+1):
    if year%4==0:
        print(year,"is a leap year")
