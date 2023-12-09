import csv
import random

# Listes de choix pour générer des adresses
noms_rues = [
    'Rue de la Liberté', 'Avenue des Champs-Élysées', 'Boulevard Saint-Michel', 'Place de la Concorde', 'Quai des Orfèvres',
    'Rue du Faubourg Saint-Honoré', 'Boulevard Haussmann', 'Avenue Montaigne', 'Avenue de l\'Opéra', 'Champs de Mars',
    'Rue de Rivoli', 'Boulevard des Capucines', 'Place Vendôme', 'Rue de la Paix', 'Avenue George V',
    'Rue de la Roquette', 'Avenue de la République', 'Rue du Faubourg du Temple', 'Boulevard de la Villette',
    'Avenue Parmentier', 'Rue Oberkampf', 'Boulevard de Belleville', 'Rue de la Pompe', 'Avenue Foch'
]

villes_departements = {
    'Paris': 'Paris', 'Marseille': 'Bouches-du-Rhône', 'Lyon': 'Rhône', 'Toulouse': 'Haute-Garonne', 'Nice': 'Alpes-Maritimes',
    'Bordeaux': 'Gironde', 'Nantes': 'Loire-Atlantique', 'Strasbourg': 'Bas-Rhin', 'Montpellier': 'Hérault', 'Lille': 'Nord',
    'Rennes': 'Ille-et-Vilaine', 'Le Havre': 'Seine-Maritime', 'Reims': 'Marne', 'Saint-Étienne': 'Loire', 'Toulon': 'Var',
    'Grenoble': 'Isère', 'Dijon': 'Côte-d\'Or', 'Nîmes': 'Gard', 'Angers': 'Maine-et-Loire', 'Villeurbanne': 'Rhône',
    'Le Mans': 'Sarthe', 'Aix-en-Provence': 'Bouches-du-Rhône', 'Brest': 'Finistère', 'Limoges': 'Haute-Vienne',
    'Amiens': 'Somme', 'Perpignan': 'Pyrénées-Orientales', 'Besançon': 'Doubs', 'Orléans': 'Loiret', 'Metz': 'Moselle',
    'Rouen': 'Seine-Maritime', 'Mulhouse': 'Haut-Rhin', 'Caen': 'Calvados', 'Nancy': 'Meurthe-et-Moselle',
    'Saint-Denis': 'Seine-Saint-Denis', 'Levallois-Perret': 'Hauts-de-Seine', 'Antibes': 'Alpes-Maritimes',
    'Saint-Maur-des-Fossés': 'Val-de-Marne', 'Issy-les-Moulineaux': 'Hauts-de-Seine'
}


# Fonction pour générer une adresse aléatoire au format demandé
def generer_adresse(ville):
    nom_rue = random.choice(noms_rues)
    departement = villes_departements[ville]


    adresse_complete = f"{random.randint(1, 100)} {nom_rue}, {ville}"
    dep = f"{departement}"
    return {
        'adresse': adresse_complete,
        'departement': dep,
    }

# Générer et enregistrer 10 adresses aléatoires dans un fichier CSV
with open('adresses.csv', 'w', newline='', encoding='utf-8') as csvfile:
    fieldnames = ['adresse', 'departement']
    writer = csv.DictWriter(csvfile, fieldnames=fieldnames)

    writer.writeheader()
    for _ in range(350):
        for ville in villes_departements.keys():
            adresse_generee = generer_adresse(ville)
            writer.writerow(adresse_generee)


