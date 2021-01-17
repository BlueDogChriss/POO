#pragma once
#include<iostream>
#include"componenteGaming.h"
#include"componenteOffice.h"
#include<string>

using namespace std;

class Laptop : public ComponenteGaming, public ComponenteOffice {
protected:
	string culoare;
	float greutate;
	string tip;
	bool ecranTouch;

public:
	Laptop();
	Laptop(int idProdus, int garantie, string anFabricatie, string denumire, string firma,
		bool disponibilitate, bool rgb, string placaVideoDedicata, int frecventa, string procesor, int frecventaProcesor,
		string culoare, float greutate, string tip, bool ecranTouch);
	Laptop(int idProdus, int garantie, string anFabricatie, string denumire, string firma,
		string placaVideoIntegrata, double autonomieBaterie, int ssd, bool performant,
		string culoare, float greutate, string tip, bool ecranTouch);
	Laptop(const Laptop& l);
	void operator=(Laptop l);
	~Laptop();

	//getteri
	string getCuloare();
	float getGreutate();
	string getTip();
	bool areEcranTouch();

	//setteri
	void setCuloare(string culoare);
	void setGreutate(float greutate);
	void setTip(string tip);
	void setEcranTouch(bool ecranTouch);
};