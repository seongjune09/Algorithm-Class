h, m = map(int, input().split())

m -= 30  
if m < 0:
    m += 60
    h -= 1
    if h < 0:
        h = 23

print(h, m)