#include<iostream>
#include<string>
#include"componenteOffice.h"

using namespace std;

ComponenteOffice::ComponenteOffice() {
	this->placaVideoIntegrata = "Nu exista informatii despre placa video integrata.\n";
	this->autonomieBaterie = 0;
	this->ssd = 0;
	this->performant = false;
}
ComponenteOffice::ComponenteOffice(int idProdus, int garantie, string anFabricatie, string denumire, string firma, string placaVideoIntegrata, double autonomieBaterie, int ssd, bool performant) {
	if (placaVideoIntegrata.empty())
		throw new exception("Nu exista informatii despre placa video integrata.\n");
	else if (autonomieBaterie == 0.0)
		throw new exception("Nu exista informatii despre autonomia bateriei.\n");
	else if (ssd == 0)
		throw new exception("Nu exista informatii despre ssd.\n");
	else if (performant = false)
		throw new exception("Nu este performant.");
	else {
		this->placaVideoIntegrata = placaVideoIntegrata;
		this->autonomieBaterie = autonomieBaterie;
		this->ssd = ssd;
		this->performant = performant;
	}
}
ComponenteOffice::ComponenteOffice(const ComponenteOffice& o) {
	this->placaVideoIntegrata = o.placaVideoIntegrata;
	this->autonomieBaterie = o.autonomieBaterie;
	this->ssd = o.ssd;
	this->performant = o.performant;
}
void ComponenteOffice::operator=(ComponenteOffice o) {
	this->placaVideoIntegrata = o.placaVideoIntegrata;
	this->autonomieBaterie = o.autonomieBaterie;
	this->ssd = o.ssd;
	this->performant = o.performant;
}
string ComponenteOffice::getPlacaVideoIntegrata() {
	return placaVideoIntegrata;
}
double ComponenteOffice::getAutonomieBaterie() {
	return autonomieBaterie;
}
int ComponenteOffice::getSsd() {
	return ssd;
}
bool ComponenteOffice::estePerformant() {
	return performant;
}
void setPlacaVideoIntegrata(string placaVideoIntegrata) {
	if (!placaVideoIntegrata.empty()) {
		this->placaVideoIntegrata = placaVideoIntegrata;
	}
}
void setAutonomieBaterie(double autonomieBaterie) {
	if (autonomieBaterie != 0.0) {
		this->autonomieBaterie = autonomieBaterie;
	}
}
void setSsd(int ssd) {
	if (ssd != 0) {
		this->ssd = ssd;
	}
}
void setPerformant(bool performant) {
	if (performant != false) {
		this->performant = performant;
	}
}
ComponenteOffice::~ComponenteOffice() {


}