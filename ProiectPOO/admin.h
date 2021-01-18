#pragma once
#include"user.h"

class Angajat : public User
{
protected:
	float salariu;
	string dataAngajare;
public:
	Angajat();
	Angajat(string nume, string prenume, string email, vector<Produse*> cos, float salariu, string dataAngajare);
	~Angajat();
	Angajat(Angajat& a);
	void operator=(Angajat a);

	float getSalariu();
	string getDataAngajare();

	void setSalariu(float salariu);
	void setDataAngajare(string dataAngajare);

	void greeting();
};