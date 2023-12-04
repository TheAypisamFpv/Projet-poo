
import random

# Listes de prénoms et noms pour hommes et femmes
prenoms_hommes = ['Lucas', 'Gabriel', 'Louis', 'Jules', 'Nathan', 'Hugo', 'Ethan', 'Adam', 'Arthur', 'Théo',
                  'Tom', 'Noah', 'Enzo', 'Maël', 'Liam', 'Maxime', 'Paul', 'Alexandre', 'Mathis', 'Raphaël',
                  'Yanis', 'Eliott', 'Samuel', 'Timéo', 'Léo', 'Ilias', 'Pierre']

noms_hommes = ['Martin', 'Dubois', 'Lefevre', 'Leroy', 'Moreau', 'Simon', 'Lefort', 'Bertrand', 'Roux', 'Fontaine',
               'Perrin', 'Moulin', 'Girard', 'Barbier', 'Chevalier', 'Dufour', 'Marchand', 'Riviere', 'Leclerc', 'Fournier',
               'Andre', 'Lefevre', 'Boucher', 'Guerin', 'Garnier', 'Switek', 'Cailloux']

prenoms_femmes = ['Emma', 'Louise', 'Jade', 'Alice', 'Chloé', 'Léa', 'Manon', 'Inès', 'Sarah', 'Camille',
                  'Zoé', 'Clara', 'Anna', 'Lina', 'Éva', 'Maëlys', 'Juliette', 'Lola', 'Lilou', 'Ambre',
                  'Agathe', 'Mia', 'Rose', 'Capucine', 'Lucie']

noms_femmes = ['Martin', 'Dubois', 'Lefevre', 'Leroy', 'Moreau', 'Simon', 'Lefort', 'Bertrand', 'Roux', 'Fontaine',
               'Perrin', 'Moulin', 'Girard', 'Barbier', 'Chevalier', 'Dufour', 'Marchand', 'Riviere', 'Leclerc', 'Fournier',
               'Andre', 'Lefevre', 'Boucher', 'Guerin', 'Garnier', 'Duschesne-Sanson']

# Génération aléatoire de noms et prénoms pour hommes et femmes
liste_noms_prenoms_hommes = [(random.choice(noms_hommes), random.choice(prenoms_hommes)) for _ in range(100)]
liste_noms_prenoms_femmes = [(random.choice(noms_femmes), random.choice(prenoms_femmes)) for _ in range(100)]

# Affichage des 10 premiers éléments de chaque liste
print("Hommes :")
for i in range(100):
    print(liste_noms_prenoms_hommes[i])

print("\nFemmes :")
for i in range(100):
    print(liste_noms_prenoms_femmes[i])
