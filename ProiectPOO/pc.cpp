#include<iostream>
#include<string>
#include"pc.h"

using namespace std;

PC::PC() :Produse::Produse(){
	this->tip = "Nu exista informatii despre tipul PC-ului.\n";
	this->culoare = "Nu exista informatii despre culoare.\n";
	this->greutate = 0;
}
PC::PC(int idProdus, int garantie, string anFabricatie, string denumire, string firma, bool disponibilitate, float pret, 
	string tip, string culoare, float greutate) :Produse::Produse(idProdus, garantie, anFabricatie, denumire,firma,disponibilitate, pret) {
	if (tip != " ")
		this->tip = tip;
	else
		this->tip = " ";
	if (culoare != " ")
		this->culoare = culoare;
	else
		this->culoare = " ";
	if (greutate > 0)
		this->greutate = greutate;
	else
		this->greutate = 0.0;
}


PC::PC(PC &p) :Produse::Produse(p) {
	this->tip = p.tip;
	this->culoare = p.culoare;
	this->greutate = p.greutate;
}
void PC::operator=(PC p) {
	this->tip = p.tip;
	this->culoare = p.culoare;
	this->greutate = p.greutate;
}

string PC::getTip() {
	return tip;
}
string PC::getCuloare() {
	return culoare;
}
float PC::getGreutate() {
	return greutate;
}
void PC::setTip(string tip) {
	if (!tip.empty()) {
		this->tip = tip;
	}
}
void PC::setCuloare(string culoare) {
	if (!culoare.empty()) {
		this->culoare = culoare;
	}
}
void PC::setGreutate(float greutate) {
	if (greutate != 0) {
		this->greutate = greutate;
	}
}
PC::~PC() {

}
