import operator
d={3:5,1:3,4:2,5:1,2:4}
sort_as=(sorted(d.items(), key=operator.itemgetter(0)))
sort_ds=(sorted(d.items(), key=operator.itemgetter(0), reverse=True))
print ("dict-sorted in asc. order: ",sort_as)
print ("dict-sorted in dsc. order: ",sort_ds)
