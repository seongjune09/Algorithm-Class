medal = [[6,4,10],[38,32,19],[26,14,17]]

g = 0
s = 0
b = 0
for row in medal:
    g += row[0]
    s += row[1]
    b += row[2]
print("금:", g)
print("은:", s)
print("동:", b)