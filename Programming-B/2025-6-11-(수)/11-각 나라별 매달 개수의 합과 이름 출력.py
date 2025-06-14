medal = [['대한민국',6,4,10],['중국',38,32,19],['일본',26,14,17]]
for row in medal:
    name = row[0]
    medals = row[1:]
    total = sum(medals)
    
    print(f"{name} : {total}")