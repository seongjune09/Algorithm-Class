def volunteer_hours(name, data):
    total = 0
    for key in data:
        if key == name:
            total += data[key]
    return total

data = [
    ('성준', 2),
    ('성준', 10),
    ('준석', 0),
    ('현우', 4),
    ('준우', 12),
    ('준석', 9),
    ('현우', 6)
]

# 딕셔너리로 이름별 시간 합치기
v_dict = {}
for name, hours in data:
    if name in v_dict:
        v_dict[name] += hours
    else:
        v_dict[name] = hours

# 사용자 입력
user_input = input("이름을 입력하세요: ")
if user_input in v_dict:
    print(f"{user_input}의 총 봉사시간은 {v_dict[user_input]}시간입니다.")
else:
    print(f"{user_input}은(는) 목록에 없습니다.")