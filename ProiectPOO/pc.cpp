#include<iostream>
#include<string>
#include"pc.h"

using namespace std;

Pc::Pc() {
	this->tip = "Nu exista informatii despre tipul PC-ului.\n";
	this->culoare = "Nu exista informatii despre culoare.\n";
	this->greutate = 0;
}
Pc::Pc(int idProdus, int garantie, string anFabricatie, string denumire, string firma,
	bool disponibilitate, bool rgb, string placaVideoDedicata, int frecventa, string procesor, int frecventaProcesor,
	string tip, string culoare, float greutate) {
	if (tip.empty())
		throw new exception("Nu exista informatii despre tipul PC-ului.\n");
	else if (culoare.empty())
		throw new exception("Nu exista informatii despre culoare.\n");
	else if (greutate == 0)
		throw new exception("Nu exista informatii despre greutate.\n");
	else {
		this->tip = tip;
		this->culoare = culoare;
		this->greutate = greutate;
	}
}

Pc::Pc(int idProdus, int garantie, string anFabricatie, string denumire, string firma,
	string placaVideoIntegrata, double autonomieBaterie, int ssd, bool performant,
	string tip, string culoare, float greutate) {
	if (tip.empty())
		throw new exception("Nu exista informatii despre tipul PC-ului.\n");
	else if (culoare.empty())
		throw new exception("Nu exista informatii despre culoare.\n");
	else if (greutate == 0)
		throw new exception("Nu exista informatii despre greutate.\n");
	else {
		this->tip = tip;
		this->culoare = culoare;
		this->greutate = greutate;
	}
}

Pc::Pc(const Pc& p) {
	this->tip = p.tip;
	this->culoare = p.culoare;
	this->greutate = p.greutate;
}
void Pc::operator=(Pc p) {
	this->tip = p.tip;
	this->culoare = p.culoare;
	this->greutate = p.greutate;
}

string Pc::getTip() {
	return tip;
}
string Pc::getCuloare() {
	return culoare;
}
float Pc::getGreutate() {
	return greutate;
}
void setTip(string tip) {
	if (!tip.empty()) {
		this->tip = tip;
	}
}
void setCuloare(string culoare) {
	if (!culoare.empty()) {
		this->culoare = culoare;
	}
}
void setGreutate(float greutate) {
	if (greutate != 0) {
		this->greutate = greutate;
	}
}
Pc::~Pc() {

}
