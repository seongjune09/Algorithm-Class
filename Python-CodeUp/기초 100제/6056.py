# 참/거짓이 서로 다를 때에만 참 출력하기

a,b = map(int, input().split())
if bool(a) != bool(b) :
    print("True")
else :
    print("False")