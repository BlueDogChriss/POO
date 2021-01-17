#include<iostream>
#include<string>
#include"componenteGaming.h"

using namespace std;

ComponenteGaming::ComponenteGaming() {
	this->rgb = false;
	this->placaVideoDedicata = "Nu are placa video dedicata\n";
	this->frecventa = 0;
	this->procesor = "Nu exista informatii despre procesor\n";
	this->frecventaProcesor = 0;
}
ComponenteGaming::ComponenteGaming(int idProdus, int garantie, string anFabricatie, string denumire, string firma, bool disponibilitate, bool rgb, string placaVideoDedicata, int frecventa, string procesor, int frecventaProcesor) {
	if (rgb == false)
		throw new exception("Nu are rgb\n");
	else if (placaVideoDedicata.empty())
		throw new exception("Nu are placa video dedicata\n");
	else if (frecventa==0)
		throw new exception("Nu exista informatii despre frecventa\n");
	else if (procesor.empty())
		throw new exception("Nu exista informatii despre procesor");
	else if (frecventaProcesor==0)
		throw new exception(Nu exista informatii despre frecventa procesorului);
	else {
		this->rgb = rgb;
		this->placaVideoDedicata = placaVideoDedicata;
		this->frecventa = frecventa;
		this->procesor = procesor;
		this->frecventaProcesor = frecventaProcesor;
	}
}
ComponenteGaming::ComponenteGaming(const ComponenteGaming& g) {
	this->rgb = g.rgb;
	this->placaVideoDedicata = g.placaVideoDedicata;
	this->frecventa = g.frecventa;
	this->procesor = g.procesor;
	this->frecventaProcesor = g.frecventaProcesor;
}
void ComponenteGaming::operator=(ComponenteGaming g) {
	this->rgb = g.rgb;
	this->placaVideoDedicata = g.placaVideoDedicata;
	this->frecventa = g.frecventa;
	this->procesor = g.procesor;
	this->frecventaProcesor = g.frecventaProcesor;
}
bool ComponenteGaming::areRgb() {
	return rgb;
}
string ComponenteGaming::getPlacaVideoDedicata() {
	return placaVideoDedicata;
}
int ComponenteGaming::getFrecventa() {
	return frecventa;
}
string ComponenteGaming::getProcesor() {
	return procesor;
}
int ComponenteGaming::getFrecventaProcesor() {
	return frecventaProcesor;
}
void setRgb(bool rgb) {
	if (rgb != false){
		this->rgb = rgb;
	}
}
void setPlacaVideoDedicata(string placaVideoDedicata){
	if (!placaVideoDedicata.empty()) {
		this->placaVideoDedicata = placaVideoDedicata;
	}
}
void setFrecventa(int frecventa) {
	if (!frecventa.empty()) {
		this->frecventa = frecventa;
	}
}
void setProcesor(string procesor) {
	if (!procesor.empty()) {
		this->procesor = procesor;
	}
}
void setFrecventaProcesor(int frecventaProcesor) {
	if (!frecventaProcesor.empty()) {
		this->frecventaProcesor = frecventaProcesor;
	}
}
ComponenteGaming::~ComponenteGaming(){

}