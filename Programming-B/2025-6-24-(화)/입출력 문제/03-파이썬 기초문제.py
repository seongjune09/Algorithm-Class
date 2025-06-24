# 사용자에게 0 또는 1을 입력받아 컴퓨터가 random모
# 듈을 이용하여 생성한 숫자와 같으면 ‘맞았습니다.’ 같지 않으면 ‘틀렸습니다.’가 출력되는 프로그램

import random
print("동전 던지기 게임을 시작합니다!")
n = random.randint(0,1)
a = int(input("앞면(0) / 뒷면(1)을 입력해 주세요 : "))
if n == a:
    print("맞았습니다!")
else:
    print("틀렸습니다.")
if n == 0:
    print("뒷면이였습니다.")
else:
    print("앞면이였습니다.")
print("게임이 종료되었습니다.")


