// .cpp file
#include "Model.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

string Model::getAddMateria(int a)
{
	v = Materias.at(a+1);
	return v;
}

void Model::addMateria(int s)
{
	
	for (int i = 0; i <= s; i++) {
		getline(cin, n);
		Materias.push_back(n);
	}
}

