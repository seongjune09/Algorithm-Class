import random
alist = []

for i in range(5):
    num = random.randint(1,100)
    alist.append(num)
    
if 50 not in alist:
    print("50이 존재하지 않습니다.")
else:
    print("50이 존재합니다.")
print(alist)