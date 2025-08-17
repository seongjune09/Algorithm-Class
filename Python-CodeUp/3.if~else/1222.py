time, class1, class2 = map(int, input().split())

while time < 90 :
    time += 5
    class1 += 1
    
if class1 > class2:
    print("win")
elif class1 < class2:
    print("lose")
else :
    print("same")