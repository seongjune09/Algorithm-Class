# 문자 1개 입력받아 알파벳 출력하기

n = ord(input())
t = ord('a')
while t <= n:
    print(chr(t), end=' ')
    t += 1