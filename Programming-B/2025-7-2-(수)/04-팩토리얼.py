def fact(n):
    sum = 1
    for i in range(1, n):
        sum *= i
    return sum

print(fact(1))
print(fact(5))
print(fact(10))