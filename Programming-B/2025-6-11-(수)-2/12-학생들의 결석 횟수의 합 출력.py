daylist =[[0,1,0,0,1],[0,0,1,0,0],[0,1,0,1,0],[0,0,0,1,0],[0,0,0,0,0]]
count = 0
for row in daylist:
        count += sum(row)
print(count)