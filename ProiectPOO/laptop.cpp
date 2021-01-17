#include<iostream>
#include<string>
#include"laptop.h"

using namespace std;

Laptop::Laptop() {
	this->culoare = "Nu exista informatii despre culoare.\n";
	this->greutate = 0;
	this->tip = "Nu exista informatii despre tipul laptopului.\n";
	this->ecranTouch = false;
}
Laptop::Laptop(int idProdus, int garantie, string anFabricatie, string denumire, string firma,
	bool disponibilitate, bool rgb, string placaVideoDedicata, int frecventa, string procesor, int frecventaProcesor,
	string culoare, float greutate, string tip, bool ecranTouch) {
	if (culoare.empty())
		throw new exception("Nu exista informatii despre culoare.\n");
	else if (greutate == 0)
		throw new exception("Nu exista informatii despre greutate.\n");
	else if (tip.empty())
		throw new exception("Nu exista informatii despre tipul laptopului.\n");
	else if (ecranTouch = false)
		throw new exception("Laptopul nu are ecran tactil.");
	else {
		this->culoare = culoare;
		this->greutate = greutate;
		this->tip = tip;
		this->ecranTouch = ecranTouch;
	}
}

Laptop::Laptop(int idProdus, int garantie, string anFabricatie, string denumire, string firma,
	string placaVideoIntegrata, double autonomieBaterie, int ssd, bool performant,
	string culoare, float greutate, string tip, bool ecranTouch) {
	if (culoare.empty())
		throw new exception("Nu exista informatii despre culoare.\n");
	else if (greutate == 0)
		throw new exception("Nu exista informatii despre greutate.\n");
	else if (tip.empty())
		throw new exception("Nu exista informatii despre tipul laptopului.\n");
	else if (ecranTouch = false)
		throw new exception("Laptopul nu are ecran tactil.");
	else {
		this->culoare = culoare;
		this->greutate = greutate;
		this->tip = tip;
		this->ecranTouch = ecranTouch;
	}
}
Laptop::Laptop(const Laptop& l) {
	this->culoare = l.culoare;
	this->greutate = l.greutate;
	this->tip = l.tip;
	this->ecranTouch = l.ecranTouch;
}
void Laptop::operator=(Laptop l) {
	this->culoare = l.culoare;
	this->greutate = l.greutate;
	this->tip = l.tip;
	this->ecranTouch = l.ecranTouch;
}
string Laptop::getCuloare() {
	return culoare;
}
float Laptop::getGreutate() {
	return greutate;
}
string Laptop::getTip() {
	return tip;
}
bool Laptop::areEcranTouch() {
	return ecranTouch;
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
void setTip(string tip) {
	if (!tip.empty()) {
		this->tip = tip;
	}
}
void setEcranTouch(bool ecranTouch) {
	if (ecranTouch != false) {
		this->ecranTouch = ecranTouch;
	}
}
Laptop::~Laptop() {


}
		
