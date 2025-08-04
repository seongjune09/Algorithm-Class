birth,code = input().split()

year = int(birth[:2])
code = int(code)

if code == 1 or code == 2:
    year += 1900
else :
    year += 2000

now = 2012
age = now - year + 1

print(age)