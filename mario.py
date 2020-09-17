try:
    height = int(input("Height: "))
except ValueError:
    height = input("Height: ")
    while height.isdigit() == False:
        height = input("Height: ")
while int(height) > 23:
    height = int(input("Height: "))
while int(height) < 1:
    height = int(input("Height: "))
rows = []
for i in range(height):
    rows.append([])
j = height - 1
k = 0
while j >= 0:
    blocksLeft = (height - j) + 1
    airLeft = j
    while airLeft > 0:
        rows[k].append(' ')
        airLeft -= 1
    while blocksLeft > 0:
        rows[k].append('#')
        blocksLeft -= 1
    j -= 1
    k += 1
for l in range(len(rows)):
    row = ''
    print(row.join(rows[l]))
