#pragma once
#include<iostream>
#include"pc.h"
#include<string>

using namespace std;

class ComponenteOffice : public PC {
protected:
	string placaVideoIntegrata;
	int ssd;
	bool performant;

public:
	ComponenteOffice();
	ComponenteOffice(int idProdus, int garantie, string anFabricatie, string denumire, string firma, bool disponibilitate, float pret, string tip, string culoare, float greutate, string placaVideoIntegrata, int ssd, bool performant); //:PC::PC(idProdus, garantie, anFabricatie, denumire, firma, disponibilitate, pret, tip, culoare, greutate) {};
	ComponenteOffice(ComponenteOffice& o);
	void operator=(ComponenteOffice o);
	~ComponenteOffice();

	//getteri
	string getPlacaVideoIntegrata();
	int getSsd();
	bool estePerformant();

	//setteri
	void setPlacaVideoIntegrata(string placaVideoIntegrata);
	void setSsd(int ssd);
	void setPerformant(bool performant);

	virtual string toString();
	virtual void setAttributes();
	//operator-=
	virtual Produse operator-=(int x);
};