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
	this->anFabricatie = "Produs fara an de fabricare\n";
};

Produse::Produse(int idProdus, int garantie, string anFabricatie, string denumire, string firma, bool disponibilitate) {
	if (idProdus == 0)
		throw new exception("Nu exista acest produs\n");
	else if (denumire.empty()) 
		throw new exception("Nu exista produsul\n");
	else if (disponibilitate == false)
		throw new exception("Produsu nu este disponibil\n");
	else if (anFabricatie.empty()) 
		throw new exception("Anul fabricatiei lipsa\n");
	else if (firma.empty()) 
		throw new exception("Produs fara firma\n");
	else if (garantie == 0) 
		throw new exception("Acest produs nu are garantie\n");
	else {
		this->idProdus = idProdus;
		this->denumire = denumire;
		this->disponibilitate = disponibilitate;
		this->anFabricatie = anFabricatie;
		this->firma = firma;
		this->garantie = garantie;
	}


};
Produse::Produse(const Produse& p)
{
	this->idProdus = p.idProdus;
	this->denumire = p.denumire;
	this->disponibilitate = p.disponibilitate;
	this->anFabricatie = p.anFabricatie;
	this->firma = p.firma;
	this->garantie = p.garantie;
}

void Produse::operator=(Produse p)
{
	this->idProdus = p.idProdus;
	this->denumire = p.denumire;
	this->disponibilitate = p.disponibilitate;
	this->anFabricatie = p.anFabricatie;
	this->firma = p.firma;
	this->garantie = p.garantie;
}

int Produse::getIdProdus()
{ 
return idProdus; 
}
string Produse::getDenumire()
{
	return denumire;
}
bool Produse::esteDisponibil()
{
	return disponibilitate;
}
string Produse::getAnFabricatie()
{
return anFabricatie;
}
string Produse::getFirma()
{
	return firma;
}
int Produse::getGarantie()
{
	return garantie;
}


void Produse::setIdProdus(int idProdus) {
	if (idProdus != 0) {
		this->idProdus = idProdus;
	}
};

void Produse::setDenumire(string denum)
{
	if (denum != " ") {
		this->denumire= denum;
}
}
void Produse::setDisponibilitate(bool disp) {
	this->disponibilitate = disp;
}
void Produse::setAnFabricatie(string anFab)
	{
		if (anFab != " ") {
			this->anFabricatie = anFab;
		}
}

void Produse::setFirma(string fir)
{
		if (fir != " ") {	
			this->firma = fir;
		}
}
void Produse::setGarantie(int gar){

	this->garantie = gar;
	
}

Produse::~Produse()
{

};