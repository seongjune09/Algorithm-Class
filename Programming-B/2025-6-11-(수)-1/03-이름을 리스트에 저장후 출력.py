# friend = []
# for i in range(5):
#     name = input('친구 이름 입력: ')
#     friend.append(name)
# print(friend)


menu = []
while True:
    food = input("음식 입력: ").strip()
    if food == "끝":
        break
    menu.append(food)
print(menu)