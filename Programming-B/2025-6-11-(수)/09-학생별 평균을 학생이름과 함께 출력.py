Scores = [['김정호',92,80,87],['박문수',94,82,86],['이사부',74,65,69],['장영실',87,89,81]]

for row in Scores:
    name = row[0]
    scores = row[1:]
    s_total = 0

    for score in scores:
        s_total += score  

    avg = s_total / len(scores)
    print(f"{name} 평균: {avg:.2f}")