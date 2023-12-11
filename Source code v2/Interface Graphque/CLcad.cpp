#include "pch.h"
#include "CLcad.h"

NS_Comp_Data::CLcad::CLcad(void)
{
	this->sCnx = "Data Source = ";

	this->sSQL = "Rien";

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSQL, this->oCnx);
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->oDS = gcnew System::Data::DataSet();

	this->oCmd->CommandType = System::Data::CommandType::Text;
}
System::Data::DataSet^ NS_Comp_Data::CLcad::exec(System::String^ sSql, System::String^ sDatTableName)
{
	this->oDS->Clear();
	this->sSQL = sSql;
	this->oCmd->CommandText = this->sSQL;
	this->oDA->SelectCommand = this->oCmd;
	this->oDA->Fill(this->oDS, "Table");

	return this->oDS;
}