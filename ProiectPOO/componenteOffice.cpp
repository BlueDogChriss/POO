#include<iostream>
#include<string>
#include"componenteOffice.h"

using namespace std;

ComponenteOffice::ComponenteOffice() {
	this->placaVideoIntegrata = "Nu exista informatii despre placa video integrata.\n";
	this->ssd = 0;
	this->performant = false;
}
ComponenteOffice::ComponenteOffice(int idProdus, int garantie, string anFabricatie, string denumire, string firma, 
	bool disponibilitate,float pret, string tip, string culoare, float greutate, string placaVideoIntegrata, int ssd, 
	bool performant) {
	if (placaVideoIntegrata != " ")
		this->placaVideoIntegrata = placaVideoIntegrata;
	else
		this->placaVideoIntegrata = " ";
	if (ssd >= 0)
		this->ssd = ssd;
	else
		this->ssd = 0;
	this->performant = performant;
	
}
ComponenteOffice::ComponenteOffice(ComponenteOffice& o):PC(o) {
	this->placaVideoIntegrata = o.placaVideoIntegrata;
	this->ssd = o.ssd;
	this->performant = o.performant;
}
void ComponenteOffice::operator=(ComponenteOffice o) {
	this->placaVideoIntegrata = o.placaVideoIntegrata;
	this->ssd = o.ssd;
	this->performant = o.performant;
}
string ComponenteOffice::getPlacaVideoIntegrata() {
	return placaVideoIntegrata;
}
int ComponenteOffice::getSsd() {
	return ssd;
}
bool ComponenteOffice::estePerformant() {
	return performant;
}
void ComponenteOffice::setPlacaVideoIntegrata(string placaVideoIntegrata) {
	if (!placaVideoIntegrata.empty()) {
		this->placaVideoIntegrata = placaVideoIntegrata;
	}
}
void ComponenteOffice::setSsd(int ssd) {
	if (ssd != 0) {
		this->ssd = ssd;
	}
}
void ComponenteOffice::setPerformant(bool performant) {
	if (performant != false) {
		this->performant = performant;
	}
}
Produse ComponenteOffice::operator-=(int x) {
	garantie -= x;
	return *this;
}
void ComponenteOffice::setAttributes() {
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

	cout << "\nIntroduceti anul fabricarii: ";
	getline(cin, sIn);
	getline(cin, sIn);
	setAnFabricatie(sIn);

	cout << "\n Introduceti garantia: ";
	if (!cin.good()) {
		cin.clear();
		cin.ignore(9999, '\n');
	}
	else {
		setGarantie(iIn);
	}

	cout << "\nIntroduceti denumire: ";
	getline(cin, sIn);
	getline(cin, sIn);
	setDenumire(sIn);


	cout << "\n Introduceti firma: ";
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

	cout << "\nIntrroduceti placa video integrata: ";
	getline(cin, sIn);
	getline(cin, sIn);
	setPlacaVideoIntegrata(sIn);

	cout << "\nIntroduceti marime SSD: ";
	cin >> iIn;
	if (!cin.good()) {
		cin.clear();
		cin.ignore(9999, '\n');
	}
	else {
		setSsd(iIn);
	}

}
string ComponenteOffice::toString() {
	return "Tip produs: " + this->getTip() +
		"\nID produs: " + to_string(this->getIdProdus()) +
		"\nGarantie produs: " + to_string(this->getGarantie()) +
		"\nAn fabricare produs: " + this->getAnFabricatie() +
		"\nDenumire produs: " + this->getDenumire() +
		"\nFirma produs: " + this->getFirma() +
		"\nDisponibilitate produs: " + (this->esteDisponibil() ? "Da" : "Nu") +
		"\nPret produs: " + to_string(this->getPret()) +
		"\nCuloare produs: " + this->getCuloare() +
		"\nGreutate produs: " + to_string(this->getGreutate()) +
		"\nPerformanta produs: " + (this->estePerformant() ? "Da" : "Nu") +
		"\nPlaca video produs: " + this->getPlacaVideoIntegrata() +
		"\nMarime SSD produs: " + to_string(this->getSsd()) +
		"\nPret produs : " + to_string(this->getPret()) +
		"\n";
}
ComponenteOffice::~ComponenteOffice() {


}