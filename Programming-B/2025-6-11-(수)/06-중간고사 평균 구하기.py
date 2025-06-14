Scores = [[92,80,87],[94,82,86],[74,65,69],[87,89,81]]
m_total = 0
for row in Scores:
    m_total = m_total + row[0]
avg = m_total / len(Scores)
print(avg)