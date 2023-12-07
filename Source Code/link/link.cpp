#using <System.Data.dll>
#using <iostream>
#include <string>


using namespace std;
using namespace std::Data;
using namespace std::Data::SqlClient;


int InsereAdresse() {
    try {
        // Cha�ne de connexion (remplacez-la par vos propres informations)
        string^ connectionString = "Data Source=LAPTOP-32D5H3E1\\MSSQL_MAX;Initial Catalog=POO;Integrated Security=True";

        // �tablir la connexion
        SqlConnection^ connection = gcnew SqlConnection(connectionString);
        connection->Open();

        // Appel de la proc�dure stock�e
        SqlCommand^ command = gcnew SqlCommand("InsereAdresse", connection);
        command->CommandType = CommandType::StoredProcedure;
        command->Parameters->Add(gcnew SqlParameter("@AdresseString", "69 rue ta maman, lisbonne"));
        command->Parameters->Add(gcnew SqlParameter("@DepartementString", "quelque part"));

        command->ExecuteNonQuery();
        Console::WriteLine("Proc�dure stock�e ex�cut�e avec succ�s.");

        // Fermeture de la connexion
        connection->Close();
    }
    catch (Exception^ ex) {
        Console::WriteLine("Erreur : " + ex->Message);
    }

    return 0;
}