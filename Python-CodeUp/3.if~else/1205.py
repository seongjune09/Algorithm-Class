a, b = map(float, input().split())

results = [
    a + b,
    a - b,
    b - a,
    a * b,
    a / b,
    b / a,
    a ** 2,
    b ** 2
]

value = max(results)
print(f"{value:.6f}")