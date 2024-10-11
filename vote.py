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

        choix_candidat = int(input(f"Candidat numero {i+1} : "))
        while (choix_candidat <= 0 or choix_candidat > len(candidats)) and (choix_candidat in choix_deja_fait):
            choix_candidat = int(input(f"Candidat numero {i+1} : "))

        choix_deja_fait.append(choix_candidat)
        choix_candidat -= 1
        print(f"Vous avez choisi le candidat numéro {candidats[choix_candidat]}")
        print(choix_deja_fait)
