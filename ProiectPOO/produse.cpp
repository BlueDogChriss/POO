#include<iostream>
#include "produse.h"
#include<string>

using namespace std;

Produse::Produse() {
	this->denumire = "Produs fara nume\n";
	this->idProdus = 0;
	this->firma = "Produs fara firma\n";
	this->garantie = 0;
	this->disponibilitate = false;
	this->anFabricatie[4] = NULL;
};

Produse::Produse(int idProdus, int garantie, char anFabricatie[4], string denumire, string firma, bool disponibilitate) {
	if (idProdus == 0) throw new exception("Nu exista acest produs\n");
	if (garantie == 0) throw new exception("Acest produs nu are garantie\n");
	if (anFabricatie == NULL) throw new exception("Anul fabricatiei lipsa\n");
	if (firma.empty()) throw new exception("Produs fara firma\n");
	if (denumire.empty()) throw new exception("Nu exista produsul\n");
	else {
		this->anFabricatie = anFabricatie;

	}
	
	


};