# 둘 다 거짓일 경우만 참 출력하기

a,b = map(int, input().split())
if bool(not a) == bool(not b) :
    print("True")
else :
    print("False")
