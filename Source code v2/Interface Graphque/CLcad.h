#pragma once

namespace NS_Comp_Data
{
	ref class CLcad
	{
	private:
		System::String^ sSQL;
		System::String^ sCnx;
		System::Data::SqlClient::SqlConnection^ oCnx;
		System::Data::SqlClient::SqlCommand^ oCmd;
		System::Data::SqlClient::SqlDataAdapter^ oDA;
		System::Data::DataSet^ oDS;
	public:
		CLcad(void);
		System::Data::DataSet^ get(System::String^, System::String^);
		void set(System::String^);
	};
}