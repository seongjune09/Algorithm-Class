r = input().strip()  

for op in "+-*/":
    if op in r:
        a, b = r.split(op)
        a = int(a)
        b = int(b)

        if op == '+':
            print(a + b)
        elif op == '-':
            print(a - b)
        elif op == '*':
            print(a * b)
        elif op == '/':
            print(f"{a / b:.2f}")
        break
else:
    print("올바른 연산자가 없습니다.")