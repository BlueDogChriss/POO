#pragma once
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Produse {
protected:
	int idProdus;
	int garantie;
	string anFabricatie;
	string denumire;
	string firma;
	bool disponibilitate;
	float pret;

public:
	Produse();
	~Produse();
	Produse(int idProdus, int garantie, string anFabricatie, string denumire, string firma, bool disponibilitate, float pret);
	
	Produse(const Produse& p);
	void operator=(Produse p);


//getteri
	int getIdProdus();
	int getGarantie();
	string getAnFabricatie();
	string getDenumire();
	string getFirma();
	bool esteDisponibil();
	float getPret();


//setteri
	void setIdProdus(int idProdus);
	void setGarantie(int garantie);
	void setAnFabricatie(string anFabricatie);
	void setDenumire(string denumire);
	void setFirma(string firma);
	void setDisponibilitate(bool disponibilitate);
	void setPret(float pret);

	virtual Produse operator-=(int x);
	virtual string toString();
	virtual void setAttributes();

	Produse operator+=(int x);
	friend ifstream& operator>>(ifstream& fin, Produse& p);

};
