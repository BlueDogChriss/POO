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
ComponenteGaming::ComponenteGaming(int idProdus, int garantie, string anFabricatie, string denumire, string firma, 
	bool disponibilitate, float pret, string tip, string culoare, float greutate, bool rgb, string placaVideoDedicata, 
	int frecventa, string procesor, int frecventaProcesor) {
		this->rgb = rgb;
		if (placaVideoDedicata != " ")
			this->placaVideoDedicata = placaVideoDedicata;
		else
			this->placaVideoDedicata = " ";
		if (frecventa >= 0)
			this->frecventa = frecventa;
		else
			this->frecventa = 0;
		if (procesor != " ")
			this->procesor = procesor;
		else
			this->procesor = " ";
		if (frecventaProcesor >= 0)
			this->frecventaProcesor = frecventaProcesor;
		else
			this->frecventaProcesor = 0;
}
ComponenteGaming::ComponenteGaming(ComponenteGaming &g):PC(g) {
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
void ComponenteGaming::setRgb(bool rgb) {
	if (rgb != false) {
		this->rgb = rgb;
	}

}
void ComponenteGaming::setPlacaVideoDedicata(string placaVideoDedicata) {
	if (!placaVideoDedicata.empty()) {
		this->placaVideoDedicata = placaVideoDedicata;
	}
}
void ComponenteGaming::setFrecventa(int frecventa) {
	if (frecventa != 0) {
		this->frecventa = frecventa;
	}
}
void ComponenteGaming::setProcesor(string procesor) {
	if (!procesor.empty()) {
		this->procesor = procesor;
	}
}
void ComponenteGaming::setFrecventaProcesor(int frecventaProcesor) {
	if (frecventaProcesor != 0) {
		this->frecventaProcesor = frecventaProcesor;
	}
}
Produse ComponenteGaming::operator-=(int x) {
	garantie -= x;
	return *this;
}
void ComponenteGaming::setAttributes() {
	float fIn;
	string sIn;
	int iIn;
	getline(cin, sIn);
	cout << "\n Introduceti ID: ";
	cin >> iIn;
	if (!cin.good()) {
		cin.clear();
		cin.ignore(9999, '\n');
	}
	else {
		setIdProdus(iIn);
	}

	cout << "\n Introduceti garantia: ";
	if (!cin.good()) {
		cin.clear();
		cin.ignore(9999, '\n');
	}
	else {
		setGarantie(iIn);
	}

	cout << "\nIntroduceti anul fabricarii: ";
	getline(cin, sIn);
	getline(cin, sIn);
	setAnFabricatie(sIn);

	cout << "\nIntroduceti denumirea: ";
	getline(cin, sIn);
	getline(cin, sIn);
	setDenumire(sIn);

	cout << "\nIntroduceti firma: ";
	getline(cin, sIn);
	getline(cin, sIn);
	setFirma(sIn);

	cout << "\nIntroduceti pretul: ";
	cin >> fIn;
	if (!cin.good()) {
		cin.clear();
		cin.ignore(9999, '\n');
	}
	else {
		setPret(fIn);
	}

	cout << "\nIntroduceti tipul: ";
	getline(cin, sIn);
	getline(cin, sIn);
	setTip(sIn);

	cout << "\nIntroduceti culoarea: ";
	getline(cin, sIn);
	getline(cin, sIn);
	setCuloare(sIn);

	cout << "\nIntroduceti greutatea: ";
	cin >> fIn;
	if (!cin.good()) {
		cin.clear();
		cin.ignore(9999, '\n');
	}
	else {
		setGreutate(fIn);
	}

	cout << "\nIntroduceti numele placii video dedicate: ";
	getline(cin, sIn);
	getline(cin, sIn);
	setPlacaVideoDedicata(sIn);

	cout << "\n Introduceti frecventa placii video: ";
	if (!cin.good()) {
		cin.clear();
		cin.ignore(9999, '\n');
	}
	else {
		setFrecventa(iIn);
	}

	cout << "\nIntroduceti numele procesorului: ";
	getline(cin, sIn);
	getline(cin, sIn);
	setProcesor(sIn);

	cout << "\n Introduceti frecventa procesorului: ";
	if (!cin.good()) {
		cin.clear();
		cin.ignore(9999, '\n');
	}
	else {
		setFrecventaProcesor(iIn);
	}

	cout << "\n";
}

string ComponenteGaming::toString() {
	return "Tip produs: " + this->getTip() +
		"\nID produs: " +to_string(this->getIdProdus()) +
		"\nGarantie produs: " +to_string(this->getGarantie()) +
		"\nAn fabricare produs: " + this->getAnFabricatie() +
		"\nDenumire produs: " + this->getDenumire() +
		"\nFirma produs: " + this->getFirma() +
		"\nDisponibilitate produs: "+(this->esteDisponibil() ? "Da" : "Nu") +
		"\nPret produs: " +to_string(this->getPret()) +
		"\nCuloare produs: " + this->getCuloare() +
		"\nGreutate produs: " +to_string(this->getGreutate()) +
		"\nRgb produs: "+(this->areRgb() ? "Da" : "Nu") +
		"\nPlaca video produs: " + this->getPlacaVideoDedicata() +
		"\nFrecventa placa video produs: " +to_string(this->getFrecventa()) +
		"\nProcesor produs: " + this->getProcesor() +
		"\nFrecventa procesor produs: " +to_string(this->getFrecventaProcesor()) +
		"\nPret produs : " + to_string(this->getPret()) +
		"\n";
}


ComponenteGaming::~ComponenteGaming() {

}