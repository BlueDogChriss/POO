#pragma once
#include<iostream>
#include<string>

using namespace std;

class Produse {
protected:
	int idProdus;
	int garantie;
	string anFabricatie;
	string denumire;
	string firma;
	bool disponibilitate;

public:
	Produse();
	~Produse();
	Produse(int idProdus, int garantie, string anFabricatie, string denumire, string firma, bool disponibilitate);
	
	Produse(const Produse& p);
	void operator=(Produse p);


//getteri
	int getIdProdus();
	int getGarantie();
	string getAnFabricatie();
	string getDenumire();
	string getFirma();
	bool esteDisponibil();


//setteri
	void setIdProdus(int idProdus);
	void setGarantie(int garantie);
	void setAnFabricatie(string anFabricatie);
	void setDenumire(string denumire);
	void setFirma(string firma);
	void setDisponibilitate(bool disponibilitate);

};
