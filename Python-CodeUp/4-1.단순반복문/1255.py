n,m = map(float,  input().split())

a = round(n * 100)
b = round(m * 100)

for i in range(a,b+1):
    print(f"{i / 100:.2f}", end=" ")