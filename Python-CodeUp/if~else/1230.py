a,b,c = map(int, input().split())

if a > 170 and b > 170 and c > 170:
    print("PASS")
elif a <= 170:
    print(f"CRASH {a}")
elif b <= 170:
    print(f"CRASH {b}")
else :
    print(f"CRASH {c}")
