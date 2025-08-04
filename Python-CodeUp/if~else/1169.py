age = int(input())
now = 2012

year = now - age +1
yy = year % 100

if year >= 2000 :
    code = 3
else :
    code = 1

print(f"{yy} {code}")