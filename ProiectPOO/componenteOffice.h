#pragma once
#include<iostream>
#include"produse.h"
#include<string>

using namespace std;

class ComponenteOffice : public Produse {
protected:
	string placaVideoIntegrata;
	double autonomieBaterie;
	int ssd;
	bool performant;

public:
	ComponenteOffice();
	ComponenteOffice(int idProdus, int garantie, string anFabricatie, string denumire, string firma, string placaVideoIntegrata, double autonomieBaterie, int ssd, bool performant);
	ComponenteOffice(const ComponenteOffice& o);
	void operator=(ComponenteOffice g);
	~ComponenteOffice();

	//getteri
	string getPlacaVideoIntegrata();
	double getAutonomieBaterie();
	int getSsd();
	bool estePerformant();

	//setteri
	void setPlacaVideoIntegrata(string placaVideoIntegrata);
	void setAutonomieBaterie(double autonomieBaterie);
	void setSsd(int ssd);
	void setPerformant(bool performant);

}