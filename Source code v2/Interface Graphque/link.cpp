#using <System.Data.dll>
#include <iostream>
#include <string>


using namespace std;
using namespace std::Data;
using namespace std::Data::SqlClient;

string^ connectionString = "Data Source=LAPTOP-32D5H3E1\\MSSQL_MAX;Initial Catalog=POO;Integrated Security=True";

string InsereAdresse(string adresse, string departement) {
    try {

        // Établir la connexion
        SqlConnection^ connection = gcnew SqlConnection(connectionString);
        connection->Open();

        // Appel de la procédure stockée
        SqlCommand^ command = gcnew SqlCommand("InsereAdresse", connection);
        command->CommandType = CommandType::StoredProcedure;
        command->Parameters->Add(gcnew SqlParameter("@AdresseString", adresse));
        command->Parameters->Add(gcnew SqlParameter("@DepartementString", departement));

        command->ExecuteNonQuery();
        Console::WriteLine("Procédure stockée exécutée avec succès.");


        // Fermeture de la connexion
        connection->Close();
        return "Procédure stockée exécutée avec succès.";
    }
    catch (Exception^ ex) {
        Console::WriteLine("Erreur : " + ex->Message);
        return "Erreur : " + ex->Message;
    }
}



string somme_commande(string list_command) {
    // somme de tout les prix de chaque composant dans la liste
    string somme;



    return somme;
}

string Prix_ttc(string prix_command) {
    // somme de tout les prix + remise/TVA/marge
    string multiplication;



    return multiplication;
}


string InsereFacture(string datefact, string dateliv, string paiement, string list_commande, string remise, string marge, string TVA, string prix_command) {
    try {

        // Établir la connexion
        SqlConnection^ connection = gcnew SqlConnection(connectionString);
        connection->Open();

        // appel a la fonction pour faire la somme de la commande


        // Appel de la procédure stockée
        SqlCommand^ command = gcnew SqlCommand("InsereFacture", connection);
        command->CommandType = CommandType::StoredProcedure;
        command->Parameters->Add(gcnew SqlParameter("@DateFacturation", datefact);
        command->Parameters->Add(gcnew SqlParameter("@DateLivraison", dateliv));
        command->Parameters->Add(gcnew SqlParameter("@MoyenPaiement", paiement));
        command->Parameters->Add(gcnew SqlParameter("@PrixOriginal", somme_commande(list_commande));
        command->Parameters->Add(gcnew SqlParameter("@Remise", remise));
        command->Parameters->Add(gcnew SqlParameter("@Marge", marge));
        command->Parameters->Add(gcnew SqlParameter("@TVA", TVA));
        command->Parameters->Add(gcnew SqlParameter("@PrixTTC ", Prix_ttc(prix_command));
        command->ExecuteNonQuery();
        Console::WriteLine("Procédure stockée exécutée avec succès.");

        // Fermeture de la connexion
        connection->Close();
    }
    catch (Exception^ ex) {
        Console::WriteLine("Erreur : " + ex->Message);
    }

    return 0;
}


string InsereCompteClient(string datefact, string dateliv, string paiement, string list_commande, string remise, string marge, string TVA, string prix_command) {
    try {

        // Établir la connexion
        SqlConnection^ connection = gcnew SqlConnection(connectionString);
        connection->Open();

        // appel a la fonction pour faire la somme de la commande


        // Appel de la procédure stockée
        SqlCommand^ command = gcnew SqlCommand("InsereCompteClient", connection);
        command->CommandType = CommandType::StoredProcedure;
        command->Parameters->Add(gcnew SqlParameter("@NumeroCompte", datefact);
        command->Parameters->Add(gcnew SqlParameter("@Nom", dateliv));
        command->Parameters->Add(gcnew SqlParameter("@Prenom", paiement));
        command->Parameters->Add(gcnew SqlParameter("@Points", somme_commande(list_commande));
        command->Parameters->Add(gcnew SqlParameter("@Mail", remise));
        command->Parameters->Add(gcnew SqlParameter("@Telephone", marge));
        command->Parameters->Add(gcnew SqlParameter("@DateNaissance", TVA));
        command->Parameters->Add(gcnew SqlParameter("@PrixTTC ", Prix_ttc(prix_command));
        command->ExecuteNonQuery();
        Console::WriteLine("Procédure stockée exécutée avec succès.");

        // Fermeture de la connexion
        connection->Close();
    }
    catch (Exception^ ex) {
        Console::WriteLine("Erreur : " + ex->Message);
    }

    return 0;
}