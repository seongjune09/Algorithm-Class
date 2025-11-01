# 2. 특정 조건의 문자열 필터링

words = ["apple","orange","banana","grape","umbrella","kiwi","avocado","egg"]
a = [n for n in words if len(n) >= 5 and n[0] in 'aeiou']
print(a)