#pragma once
#include<iostream>
#include<vector>
#include"produse.h"

using namespace std;

class Login {
public:
	void login();
	void meniu(int tipUser);
	void showProduseToAdd();
	void showAllProduse(vector<Produse*> produse);
	void addProduseToCos();

};