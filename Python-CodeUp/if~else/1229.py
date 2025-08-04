a,b = map(float, input().split())

if a < 150:
    weight = a - 100
elif 150 <= a < 160:
    weight = (a - 150) /2 + 50
else :
    weight = (a - 100) * 0.9
    
bi = ((b - weight) * 100) / weight

if bi <= 10:
    print("정상")
elif 10 < bi <= 20:
    print("과체중")
elif bi > 20:
    print("비만")
