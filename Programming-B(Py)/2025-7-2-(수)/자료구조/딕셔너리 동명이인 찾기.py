def find_same_name(name):
    
    d = {}
    
    s = set()
    
    for key in name:
        if key in d:
            d[key]+=1
        else :
            d[key] = 1
            
    for key in d:
        if d[key] > 1:
            s.add(key)
    return s
    
name = ["Tom", "Jerry", "Mike105:", "Tom"]  
print(find_same_name(name))
name2 = ["Tom", "Jerry", "Mike", "Tom", "Mike"]
print(find_same_name(name2))
