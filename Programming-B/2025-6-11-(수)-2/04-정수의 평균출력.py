# 4.

score = input().split()
total = 0
score[0] = int(score[0])
score[1] = int(score[1])
score[2] = int(score[2])
for i in score:
    total += i
print("{:.2f}".format(total / len(score)))
