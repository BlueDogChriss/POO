#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include "user.h"
#include "produse.h"

using namespace std;

class Meniu {
public:
	int alegeInput(int start, int finish);
	void saveProdus(Produse* produse);
	void getProduse();
	void deleteToateProdusele();
	void addProduse(Produse* produse);
	void readProduse();

	string addInformatie(string s);
	void addProduseToMagazin(vector<Produse*>& produseDisponibile, Produse* const& produse);
	void deleteProduseFromMagazin(vector<Produse*>& produseDisponibile, int i);
	void editProduseFromMagazin(vector<Produse*>& produseDisponibile, int i);
	void sendComanda(User u);
	void viewComenzi(bool print);
	void printComenzi(string s);
};