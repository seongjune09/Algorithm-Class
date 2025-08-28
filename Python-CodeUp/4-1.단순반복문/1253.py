n,m = map(int, input().split())
if n>m :
    for i in range(m,n+1):
        print(i, end=" ")
else :
    for i in range(n,m+1):
        print(i, end=" ")