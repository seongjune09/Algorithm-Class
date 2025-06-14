menu = ['치킨','스테이크','피자','샐러드']
new_menu = []

for item in menu:
    if item == '스테이크':
        new_menu.append('감자튀김')
    else:
        new_menu.append(item)
print(menu)
print("변경=>", new_menu)