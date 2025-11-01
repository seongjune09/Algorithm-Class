menu = []
while True:
    food = input("음식 입력: ").strip()
    if food == "끝":
        break
    menu.append(food)
print(menu)