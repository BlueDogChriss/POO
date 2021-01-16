#pragma once
#include<iostream>
#include"produse.h"
#include<string>

using namespace std;

class ComponenteGaming : public Produse {
protected:
	bool rgb;
	string placaVideoDedicata;
	int frecventa;
	string procesor;
	int frecventaProcesor;

public:
	ComponenteGaming();
	ComponenteGaming(int idProdus, int garantie, string anFabricatie, string denumire, string firma, bool disponibilitate, bool rgb, string placaVideoDedicata, int frecventa, string procesor, int frecventaProcesor);
	ComponenteGaming(const ComponenteGaming& g);
	void operator=(ComponenteGaming g);
	~ComponenteGaming();

//getteri
	bool areRgb();
	string getPlacaVideoDedicata();
	int getFrecventa();
	string getProcesor();
	int getFrecventaProcesor();
//setteri
	void setRgb(bool rgb);
	void setPlacaVideoDedicata(string placaVideoDedicata);
	void setFrecventa(int frecventa);
	void setProcesor(string procesor);
	void setFrecventaProcesor(int frecventaProcesor);

};
