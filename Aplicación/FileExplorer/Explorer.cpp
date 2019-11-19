#include "Explorer.h"
#include "conio.h"
using namespace FileExplorer;
void main() {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault;
	Application::Run(
		gcnew Explorer()
	);
	getch();

}