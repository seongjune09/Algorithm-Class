def hanoi(n,start,target,tmp):
    if n == 1:
        print(start, "->", target) 
        return 
    hanoi(n-1, start,tmp,target)
    print(start, "->", target)
    hanoi(n-1, tmp,target,start)
    
print("n = 1")
hanoi(1, 1, 3, 2)  
print("n = 2")
hanoi(2, 1, 3, 2)  
print("n = 3")
hanoi(3, 1, 3, 2) 
