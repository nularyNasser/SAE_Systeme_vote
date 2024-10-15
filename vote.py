# Système de vore Irland

candidats = ['A', 'B', 'C', 'D', 'E', 'F']
nombre_electeur = int(input("Nombre d'electeur: "))
choix_candidat: int
choix_deja_fait = []


for nb_scrutin in range(nombre_electeur):
    print("-----------------------------------")
    print(f"SCRUTIN NUMERO {nb_scrutin+1}") # Nombre de scrutin
    
    for i in range(nombre_electeur):
        print("Classer par ordre de préférence votre candidat: ")
        print("---------")
        for candidat in range(len(candidats)): # Affichage des candidat
            print(candidats[candidat])
        
classement = {
    1: ['A', 'B', 'C', 'D'],
    2: ['A', 'C', 'B', 'D'],
    3: ['B', 'A', 'C', 'D']
}

compteurA = 0
compteurB = 0

for i in range(len(classement)):
    print(classement[i+1])
    if classement[i+1][0] == 'A':
        compteurA += 1
    elif classement[i+1][0] == 'B':
        compteurB += 1

print('A:', compteurA)
print('B:', compteurB)