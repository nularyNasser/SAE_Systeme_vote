# Système de vore Irland

classement = {
    1: ['A', 'B', 'C', 'D'],
    2: ['A', 'C', 'B', 'D'],
    3: ['B', 'A', 'C', 'D']
}

compteurA = 0
compteurB = 0

for i in range(len(classement)):
    print(classement[i+1])

for i in range(len(classement[1])):
    for j in range(len(classement)):
        print(f"Classement numéro {j+1}")
        if classement[j+1][0] == 'A':
            compteurA += 1
        elif classement[j+1][0] == 'B':
            compteurB += 1

        print(10*'-')
        print('A:', compteurA)
        print('B:', compteurB)