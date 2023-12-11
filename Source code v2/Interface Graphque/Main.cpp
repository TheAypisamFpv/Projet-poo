#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int __clrcall Main(cli::array<System::String ^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	InterfaceGraphque::MyForm monFormulaire;
	Application::Run(% monFormulaire);
	return 1;
}