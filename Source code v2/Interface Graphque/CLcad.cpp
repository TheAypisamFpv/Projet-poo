#include "pch.h"
#include "CLcad.h"

NS_Comp_Data::CLcad::CLcad(void)
{
	this->sCnx = "Data Source=CAILLOUX\\MSSQL_CAILLOUX;Initial Catalog=Projet;Persist Security Info=True;User ID=projet;Password=123456789";

	this->sSQL = "Rien";

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSQL, this->oCnx);
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->oDS = gcnew System::Data::DataSet();

	this->oCmd->CommandType = System::Data::CommandType::Text;
}

System::Data::DataSet^ NS_Comp_Data::CLcad::get(System::String^ sSQL, System::String^ sTable)
{
	this->oDS->Clear();
	this->sSQL = sSQL;
	this->oCmd->CommandText = this->sSQL;
	this->oDA->SelectCommand = this->oCmd;
	this->oDA->Fill(this->oDS, sTable);

	return this->oDS;
}

void NS_Comp_Data::CLcad::set(System::String^ sSql)
{
	this->sSQL = sSql;
	this->oCmd->CommandText = this->sSQL;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	this->oCmd->ExecuteNonQuery();
	this->oCnx->Close();
}