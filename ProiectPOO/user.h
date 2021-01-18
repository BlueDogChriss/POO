#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"produse.h"
#include"credentiale.h"

class User : public Credentiale {
protected:
	string nume;
	string prenume;
	string email;
	vector<Produse*> cos;
public:
	User();
	User(string nume, string prenume, string email, vector<Produse*> cos);
	User(User& u);
	void operator=(User u);
	string getEmail();
	string getNume();
	string getPrenume();
	int getMarimeCos();
	void setEmail(string email);
	void setNume(string nume);
	void setPrenume(string nume);
	void greeting();
	void addToCos(Produse* produs);
	void showCos();
	void deleteProdusFromCos(vector<Produse*>& produseMagazin, int index);
	string prepareOrder(string adresa);
	~User();

};

