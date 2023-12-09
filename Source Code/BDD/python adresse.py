import csv
import random

# Listes de choix pour g�n�rer des adresses
noms_rues = [
    'Rue de la Libert�', 'Avenue des Champs-�lys�es', 'Boulevard Saint-Michel', 'Place de la Concorde', 'Quai des Orf�vres',
    'Rue du Faubourg Saint-Honor�', 'Boulevard Haussmann', 'Avenue Montaigne', 'Avenue de l\'Op�ra', 'Champs de Mars',
    'Rue de Rivoli', 'Boulevard des Capucines', 'Place Vend�me', 'Rue de la Paix', 'Avenue George V',
    'Rue de la Roquette', 'Avenue de la R�publique', 'Rue du Faubourg du Temple', 'Boulevard de la Villette',
    'Avenue Parmentier', 'Rue Oberkampf', 'Boulevard de Belleville', 'Rue de la Pompe', 'Avenue Foch'
]

villes_departements = {
    'Paris': 'Paris', 'Marseille': 'Bouches-du-Rh�ne', 'Lyon': 'Rh�ne', 'Toulouse': 'Haute-Garonne', 'Nice': 'Alpes-Maritimes',
    'Bordeaux': 'Gironde', 'Nantes': 'Loire-Atlantique', 'Strasbourg': 'Bas-Rhin', 'Montpellier': 'H�rault', 'Lille': 'Nord',
    'Rennes': 'Ille-et-Vilaine', 'Le Havre': 'Seine-Maritime', 'Reims': 'Marne', 'Saint-�tienne': 'Loire', 'Toulon': 'Var',
    'Grenoble': 'Is�re', 'Dijon': 'C�te-d\'Or', 'N�mes': 'Gard', 'Angers': 'Maine-et-Loire', 'Villeurbanne': 'Rh�ne',
    'Le Mans': 'Sarthe', 'Aix-en-Provence': 'Bouches-du-Rh�ne', 'Brest': 'Finist�re', 'Limoges': 'Haute-Vienne',
    'Amiens': 'Somme', 'Perpignan': 'Pyr�n�es-Orientales', 'Besan�on': 'Doubs', 'Orl�ans': 'Loiret', 'Metz': 'Moselle',
    'Rouen': 'Seine-Maritime', 'Mulhouse': 'Haut-Rhin', 'Caen': 'Calvados', 'Nancy': 'Meurthe-et-Moselle',
    'Saint-Denis': 'Seine-Saint-Denis', 'Levallois-Perret': 'Hauts-de-Seine', 'Antibes': 'Alpes-Maritimes',
    'Saint-Maur-des-Foss�s': 'Val-de-Marne', 'Issy-les-Moulineaux': 'Hauts-de-Seine'
}


# Fonction pour g�n�rer une adresse al�atoire au format demand�
def generer_adresse(ville):
    nom_rue = random.choice(noms_rues)
    departement = villes_departements[ville]


    adresse_complete = f"{random.randint(1, 100)} {nom_rue}, {ville}"
    dep = f"{departement}"
    return {
        'adresse': adresse_complete,
        'departement': dep,
    }

# G�n�rer et enregistrer 10 adresses al�atoires dans un fichier CSV
with open('adresses.csv', 'w', newline='', encoding='utf-8') as csvfile:
    fieldnames = ['adresse', 'departement']
    writer = csv.DictWriter(csvfile, fieldnames=fieldnames)

    writer.writeheader()
    for _ in range(350):
        for ville in villes_departements.keys():
            adresse_generee = generer_adresse(ville)
            writer.writerow(adresse_generee)


