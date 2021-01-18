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

Produse::Produse(int idProdus, int garantie, string anFabricatie, string denumire, string firma, bool disponibilitate, float pret) {
	if (idProdus >= 0)
		this->idProdus = idProdus;
	else
		cout<< "ID invalid";
	if (garantie != 0)
		this->garantie = garantie;
	else
		this->garantie = 0;
	if (anFabricatie != " ")
		this->anFabricatie = anFabricatie;
	else
		this->anFabricatie = " ";
	if (denumire != " ")
		this->denumire = denumire;
	else
		this->denumire = "Produs fara nume.";
	if (firma != " ")
		this->firma = firma;
	else
		this->firma = " ";
	this->disponibilitate = disponibilitate;
	if (pret >= 0.0)
		this->pret = pret;
	else
		this->pret = 0.0;
};
Produse::Produse(const Produse &p)
{
	this->idProdus = p.idProdus;
	this->denumire = p.denumire;
	this->disponibilitate = p.disponibilitate;
	this->anFabricatie = p.anFabricatie;
	this->firma = p.firma;
	this->garantie = p.garantie;
	this->pret = p.pret;
}

void Produse::operator=(Produse p)
{
	this->idProdus = p.idProdus;
	this->denumire = p.denumire;
	this->disponibilitate = p.disponibilitate;
	this->anFabricatie = p.anFabricatie;
	this->firma = p.firma;
	this->garantie = p.garantie;
	this->pret = p.pret;
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
float Produse::getPret()
{
	return pret;
}


void Produse::setIdProdus(int idProdus) {
	if (idProdus != 0) {
		this->idProdus = idProdus;
	}
};

void Produse::setDenumire(string denum)
{
	if (denum != " ") {
		this->denumire = denum;
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
void Produse::setGarantie(int gar) {

	this->garantie = gar;

}
void Produse::setPret(float pret) {
	this->pret = pret;
}

//op +=
Produse Produse::operator+=(int x)
{
	pret += x;
	return *this;
}

string Produse::toString()
{
	return "Produs\n";
}

void Produse::setAttributes()
{

}

Produse Produse::operator-=(int x)
{
	return *this;
}

ifstream& operator>>(ifstream& fin, Produse& p)
{
	fin.read((char*)&p.idProdus, sizeof(int));
	fin.read((char*)&p.denumire, sizeof(string));
	fin.read((char*)&p.disponibilitate, sizeof(bool));
	fin.read((char*)&p.anFabricatie, sizeof(string));
	fin.read((char*)&p.firma, sizeof(string));
	fin.read((char*)&p.garantie, sizeof(int));
	fin.read((char*)&p.pret, sizeof(float));

	return fin;
}

Produse::~Produse()
{

};