#include "View.h"
#include <string>

void View::setListener(ViewListener* listener)
{
	this->listener = listener;
}

void View::printMateria(string n)
{
	if ((n == "FIS100") || (n == "MAT100") || (n == "MAT101") || (n == "SHC100") || (n == "SIS100")) {

		if (n == "FIS100") {
			cout << "\n "<<n<<" Materia FÍSICA BÁSICA I "<<endl;
			cout << n << " No requiere de PreRequisitos " << endl;
			cout << n <<"+ MAT101 " << " Habre las Materias FIS200 " << endl;
		}
		else if (n == "MAT100") {
			cout << "\n " << n << " Materia ÁLGEBRA I  " << endl;
			cout << n << " No requiere de PreRequisitos " << endl;
			cout << n << " Habre las Materias MAT103  " << endl;
		}
		else if (n == "MAT101") {
			cout << "\n " << n << " Materia CÁLCULO I  " << endl;
			cout << n << " No requiere de PreRequisitos " << endl;
			cout << n << " + SIS100 " << " Habre las Materias FIS200 " << endl;
			cout << n << " Habre las Materias MAT102  " << endl;
		}
		else if (n == "SHC100") {
			cout << "\n " << n << " TÉCNICAS DE ESTUDIO Y DESARROLLO DE HABI. COMU. " << endl;
			cout << n << " No requiere de PreRequisitos " << endl;
			cout << n << " + MAT101 " << " Habre las Materias SIS308 " << endl;
		}
		else if (n == "SIS100") {
			cout << "\n " << n << " Materia PROGRAMACIÓN BÁSICA   " << endl;
			cout << n << " No requiere de PreRequisitos " << endl;
			cout << n << " Habre las Materias SIS101  " << endl;
		}
	}
	else
	{
		cout << "Materia No encontrada" << "\n";
	}
}

void View::run()
{

	int num;
	cin >> num;
	listener->userMateriaAdd(num);

	for (int i = 0; i < num; i++) {

		listener->userMateriaAddShow(poc);
		poc++;
	}

	/*while (true)
	{
		int num;
		cin >> num;
		listener->userMateriaAdd(num);

		for (int i = 0; i < num; i++) {

			listener->userMateriaAddShow(poc);
			poc++;
		}
	}*/
}