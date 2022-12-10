// .cpp file
#include "Controller.h"

Controller::Controller(View* view, Model* model)
{
	this->view = view;
	this->model = model;
}

void Controller::userMateriaAdd(int t)
{
	this->model->addMateria(t);
}

void Controller::userMateriaAddShow(int a)
{
	auto userMateria = this->model->getAddMateria(a);
	this->view->printMateria(userMateria);
}


