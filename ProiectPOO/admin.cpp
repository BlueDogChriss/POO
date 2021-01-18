#include<iostream>
#include"admin.h"


Angajat::Angajat() : User()
{
	salariu = 0;
	dataAngajare = "dd.mm.yyyy";
}

Angajat::Angajat(string nume, string prenume, string email, vector<Produse *> cos, float salariu, string dataAngajare) :User(nume, prenume, email, cos)
{
	if (salariu >= 0)
	{
		this->salariu = salariu;
	}
	else this->salariu = 0;

	if (dataAngajare != " ")
	{
		this->dataAngajare = dataAngajare;
	}
	else this->dataAngajare = "1 Ianuarie 2000";
}
//constructor copiere
Angajat::Angajat(Angajat& a) :User(a) {
	this->salariu = salariu;
	this->dataAngajare = dataAngajare;
}
//op =
void Angajat::operator=(Angajat a) {
	this->User::operator=(a);
	this->salariu = salariu;
	this->dataAngajare = dataAngajare;
}

//getteri

float Angajat::getSalariu()
{
	return salariu;
}
string Angajat::getDataAngajare()
{
	return dataAngajare;
}

//setteri

void Angajat::setSalariu(float salariu)
{
	if (salariu >= 0)
		this->salariu = salariu;
}

void Angajat::setDataAngajare(string dataAngajare)
{
	if (dataAngajare != " ")
		this->dataAngajare = dataAngajare;
}
void Angajat::greeting()
{
	cout << "\n\tBine ai venit domnule angajat " + prenume + " " + nume + "!\n\t";
}

Angajat::~Angajat()
{

}
