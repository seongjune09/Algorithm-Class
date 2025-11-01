need_bees = list(range(20, 31))

a = int(input("꿀벌 몇 마리가 있나요? "))
win = False  

for bees in need_bees:
    if a >= bees:
        win = True
        break
    
if win:
    print("말벌을 물리쳐서 벌집에 평화가 찾아왔네요!")
else:
    print("이런 말벌을 물리치지 못 했어요..")