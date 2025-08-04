a, b = map(int, input().split())

num = [0,400,340,170,100,70]
sum = num[a] + num[b]

if sum > 500:
    print("angry")
else :
    print("no angry")
