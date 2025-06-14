daylist =[[0,1,0,0,1],[0,0,1,0,0],[0,1,0,1,0],[0,0,0,1,0],[0,0,0,0,0]]
count = 0
for row in daylist:
    if row[1] == 1:
        count += 1
print(count)
    
