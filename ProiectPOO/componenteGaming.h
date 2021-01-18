#pragma once
#include<iostream>
#include"pc.h"
#include<string>


using namespace std;

class ComponenteGaming : public PC {
protected:
	bool rgb;
	string placaVideoDedicata;
	int frecventa;
	string procesor;
	int frecventaProcesor;

public:
	ComponenteGaming();
	ComponenteGaming(int idProdus, int garantie, string anFabricatie, string denumire, string firma, bool disponibilitate, float pret, string tip, string culoare, float greutate, bool rgb, string placaVideoDedicata, int frecventa, string procesor, int frecventaProcesor); //:PC::PC(idProdus, garantie, anFabricatie, denumire, firma, disponibilitate, pret, tip, culoare, greutate) {};
	ComponenteGaming(ComponenteGaming& g);
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

	virtual string toString();
	virtual void setAttributes();
	//operator-=
	virtual Produse operator-=(int x);


};
