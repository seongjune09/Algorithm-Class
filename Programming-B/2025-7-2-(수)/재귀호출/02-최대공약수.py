def gcd(a,b):
    i = min(a,b)
    while True:
        if a%i == 0 and b%i == 0:
            return i
        i = i - 1
    
print(gcd(1, 5))    # 1
print(gcd(3, 6))    # 3
print(gcd(60, 24))  # 12
print(gcd(81, 27))  # 27


# 유클리드 
# def gcd(a,b):
#     if b == 0:
#         return a
#     return gcd(b, a%b)

# print(gcd(1, 5))    # 1
# print(gcd(3, 6))    # 3
# print(gcd(60, 24))  # 12
# print(gcd(81, 27))  # 27
