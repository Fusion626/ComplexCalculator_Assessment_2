#include "CalculatorForm.h"

using namespace System;											 //Provides functionality to work with the UI controls
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ComplexCalculator::CalculatorForm form;
	Application::Run(%form);
}