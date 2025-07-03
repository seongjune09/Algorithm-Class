def palindrome(n):
    q = []
    s = []
    for i in n:
        if i.isalpha():
            q.append(i.lower())
            s.append(i.lower())
    while q:
        if q.pop(0) != s.pop():
            return False
    return True

print(palindrome("Wow"))
print(palindrome("Madam;;;, I’m Adam."))
print(palindrome("Madam,''' I am Adam."))
