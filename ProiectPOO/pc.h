#pragma once
#include<iostream>
#include"produse.h"
#include<string>

using namespace std;

class PC : public Produse {
protected:
	string tip;
	string culoare;
	float greutate;

public:
	PC();
	PC(int idProdus, int garantie, string anFabricatie, string denumire, string firma, bool disponibilitate, float pret, string tip, string culoare, float greutate); //:Produse(idProdus, garantie, anFabricatie, denumire, firma, disponibilitate, pret) {};
	PC(PC& p);
	void operator=(PC p);
	~PC();

	//getteri
	string getTip();
	string getCuloare();
	float getGreutate();

	//setteri
	void setTip(string tip);
	void setCuloare(string culoare);
	void setGreutate(float greutate);

};