#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"produse.h"
#include "credentiale.h"

class User : public Credentiale {
protected:
	string nume;
	string prenume;
	string email;
public:
	User();
	User(string nume, string prenume, string email);
	User(User& u);
	void operator=(User u);
	string getEmail();
	string getNume();
	string getPrenume();
	void setEmail(string email);
	void setNume(string nume);
	void setPrenume(string nume);
	void greeting();

	~User();

};

