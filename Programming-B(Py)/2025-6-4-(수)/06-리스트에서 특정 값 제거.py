# 6. 리스트에서 특정 값 제거

n = input("입력: ").split()
ls = []

for result in n:
    if result == "0":
        break
    ls.append(int(result))
if 3 in ls:
    ls.remove(3)
print(ls)