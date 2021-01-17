#pragma once
#include<iostream>
#include"componenteGaming.h"
#include"componenteOffice.h"
#include<string>

using namespace std;

class Pc : public ComponenteGaming, public ComponenteOffice {
protected:
	string tip;
	string culoare;
	float greutate;

public:
	Pc();
	Pc(int idProdus, int garantie, string anFabricatie, string denumire, string firma,
		bool disponibilitate, bool rgb, string placaVideoDedicata, int frecventa, string procesor, int frecventaProcesor,
		string tip, string culoare, float greutate);
	Pc(int idProdus, int garantie, string anFabricatie, string denumire, string firma,
		string placaVideoIntegrata, double autonomieBaterie, int ssd, bool performant,
		string tip, string culoare, float greutate);
	Pc(const Pc& p);
	void operator=(Pc p);
	~Pc();

	//getteri
	string getTip();
	string getCuloare();
	float getGreutate();

	//setteri
	void setTip(string tip);
	void setCuloare(string culoare);
	void setGreutate(float greutate);
};