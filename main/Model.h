#pragma once
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Model
{
	vector<string> Materias;
	string n;
	string v;
public:
	int t = 0;
	string getAddMateria(int );
	void addMateria(int);
};
