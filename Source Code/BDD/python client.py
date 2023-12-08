
import random
from datetime import datetime

# Générer un numéro de compte
def generer_numero_compte():
    return ''.join([str(random.randint(0, 9)) for _ in range(6)])

# Générer des informations personnelles
def generer_infos_personnelles(genre):
    if genre.lower() == 'homme':
        prenom = random.choice(prenoms_hommes)
        nom = random.choice(noms_hommes)
    elif genre.lower() == 'femme':
        prenom = random.choice(prenoms_femmes)
        nom = random.choice(noms_femmes)
    else:
        raise ValueError("Le genre doit être 'homme' ou 'femme'.")

    # Générer l'adresse e-mail
    adresse_email = f"{prenom.lower()}{nom.lower()}@gmail.com"

    # Générer le numéro de téléphone
    numero_telephone = generer_numero_telephone()

    return prenom, nom, adresse_email, numero_telephone

# Générer un numéro d'ID unique
def generer_numero_id():
    global id_count
    id_count += 1
    return id_count

# Générer une date de naissance aléatoire au format 'YYYY-MM-DD'
def generer_date_naissance():
    start_date = datetime(1960, 1, 1)
    end_date = datetime(2005, 12, 31)
    random_date = start_date + (end_date - start_date) * random.random()
    return random_date.strftime('%Y-%m-%d')

# Générer un numéro de téléphone unique commençant par "06" ou "07"
def generer_numero_telephone():
    debut_numero = random.choice(["06", "07"])
    reste_numero = ''.join([str(random.randint(0, 9)) for _ in range(8)])
    return f"{debut_numero}{reste_numero}"

# Générer un nombre aléatoire de points
def generer_chiffre_aleatoire():
    return random.randint(0, 99999)

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
               'Andre', 'Lefevre', 'Boucher', 'Guerin', 'Garnier', 'Duschesne-Sanson', 'Khalifa']

# Initialiser le compteur d'ID
id_count = 0

# Nombre de comptes clients à générer
nombre_comptes_clients = 100

# Générer et afficher les comptes clients
for _ in range(nombre_comptes_clients):
    genre_personne = random.choice(['homme', 'femme'])
    prenom, nom, adresse_email, numero_telephone = generer_infos_personnelles(genre_personne)
    numero_compte = generer_numero_compte()
    nombre_points = generer_chiffre_aleatoire()
    date_naissance = generer_date_naissance()
    numero_id = generer_numero_id()

    # Afficher les informations du compte
    print(f"INSERT INTO facture (numero_compte, nom, prenom, nombre_points, adresse_email, date_naissance, numero_telephone, numero_id) VALUES ('{numero_compte}', '{nom}', '{prenom}', {nombre_points}, '{adresse_email}', '{date_naissance}', '{numero_telephone}', {numero_id});")
