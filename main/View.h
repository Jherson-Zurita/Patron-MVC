#pragma once
#include <iostream>
#include <string>
#include "ViewListener.h"
using namespace std;

class View
{
	ViewListener* listener;
	int poc = 0;
public:
	void setListener(ViewListener* listener);
	void printMateria(string);

	// GUI CODE
	void run();
};
