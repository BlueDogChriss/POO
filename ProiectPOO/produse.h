#pragma once
#include<iostream>
#include<string>

using namespace std;

class Produse {
protected:
	int idProdus;
	int garantie;
	char anFabricatie[4];
	string denumire;
	string firma;
	bool disponibilitate;

public:
	Produse();
	~Produse();
	Produse(int idProdus, int garantie, char anFabricatie[4], string denumire, string firma, bool disponibilitate);

};
