a,b,c = map(int, input().split())

s = sorted([a,b,c])

if a + b <= c:
    print("삼각형아님")
elif a == b == c:
    print("정삼각형")
elif a == b or a == c or b == c:
    print("이등변삼각형")
elif a*a + b*b == c*c :
    print("직각삼각형")
else :
    print("삼각형")