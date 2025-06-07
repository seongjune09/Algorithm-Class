# 5. 리스트 정렬 및 뒤집기

n = list(input("입력: ").split())
n.sort()
print("오름차순: " + str(n))
n.sort(reverse=True)
print("내림차순: " + str(n))
