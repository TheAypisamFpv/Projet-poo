import mysql.connector
from datetime import datetime, timedelta
import random


# Paramètres
modes_paiement = ['visa', 'paypal', 'carte bancaire', 'Paysafecard', 'Btc']
jour_commande = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28]
mois_commande = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
annee_commande = [2015, 2016, 2017, 2018, 2019, 2020, 2021, 2022, 2023]
marge_commerciale = [2, 5, 10, 15, 20]
tva = [0, 5, 15, 20]

# Générer les dates de commande
liste_date_commande = [datetime(random.choice(annee_commande), random.choice(mois_commande), random.choice(jour_commande)) for _ in range(100)]

# Générer les dates de livraison en ajoutant un délai entre 3 et 5 jours à la date de commande
liste_date_livraison = [commande + timedelta(days=random.randint(3, 5)) for commande in liste_date_commande]

# Générer et insérer les factures dans la table facture
for i in range(100):
    mode_paiement = random.choice(modes_paiement)
    date_commande = liste_date_commande[i].strftime('%d-%m-%Y')
    date_livraison = liste_date_livraison[i].strftime('%d-%m-%Y')
    marge = random.choice(marge_commerciale)
    prix_hors_taxe = random.uniform(50, 500)  # Vous pouvez ajuster la plage selon vos besoins
    tva_percent = random.choice(tva)
    tva_amount = (prix_hors_taxe * tva_percent) / 100
    prix_ttc = prix_hors_taxe + tva_amount + marge
    print('(',mode_paiement, ',', date_commande,',', date_livraison, ',',marge, ',',tva_percent, ')'',')


    