#using <System.Data.dll>
#using <iostream>

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;



int InsereAdresse() {
    try {
        // Chaîne de connexion (remplacez-la par vos propres informations)
        String^ connectionString = "Data Source=LAPTOP-32D5H3E1\\MSSQL_MAX;Initial Catalog=POO;Integrated Security=True";

        // Établir la connexion
        SqlConnection^ connection = gcnew SqlConnection(connectionString);
        connection->Open();

        // Appel de la procédure stockée
        SqlCommand^ command = gcnew SqlCommand("InsereAdresse", connection);
        command->CommandType = CommandType::StoredProcedure;
        command->Parameters->Add(gcnew SqlParameter("@AdresseString", "69 rue ta maman, lisbonne"));
        command->Parameters->Add(gcnew SqlParameter("@DepartementString", "quelque part"));

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