#include "OknoGlowne.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<System::String ^> ^args) {
	Application::EnableVisualStyles();
	kwadraty::OknoGlowne form;
	Application::Run(%form);
	return 0;
}