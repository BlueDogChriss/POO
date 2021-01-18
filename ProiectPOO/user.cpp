#include "user.h"
#include<sstream>

User::User()
{
	this->nume = "nume";
	this->prenume = "prenume";
	this->email = "email@email.com";
}

User::User(string nume, string prenume, string email, vector<Produse*> cos)
{
	if (nume != " ")
	{
		this->nume = nume;
	}
	else this->nume = "Useru";
	if (prenume != " ")
	{
		this->prenume = prenume;
	}
	else this->prenume = "User";
	if (email != " ")
	{
		this->email = email;
	}
	else this->email = email;

	this->cos = cos;
}

User::User(User& u)
{
	this->nume = u.nume;
	this->prenume = u.prenume;
	this->email = u.email;
	this->cos.assign(u.cos.begin(), u.cos.end());
}
void User::operator=(User u)
{
	this->nume = u.nume;
	this->prenume = u.prenume;
	this->email = u.email;
	this->cos.assign(u.cos.begin(), u.cos.end());
}
//getteri
string User::getNume()
{
	return nume;
}
string User::getPrenume()
{
	return prenume;
}
string User::getEmail()
{
	return email;
}
int User::getMarimeCos()
{
	return cos.size();
}
//setteri

void User::setNume(string nume)
{
	if (nume != " ")
	{
		this->nume = nume;
	}
}
void User::setPrenume(string prenume)
{
	if (prenume != " ")
	{
		this->prenume = prenume;
	}
}
void User::setEmail(string email)
{
	if (email != " ")
	{
		this->email = email;
	}
}

void User::greeting()
{
	cout << "\n\tSalut " + prenume + " " + nume + "!\t\n";
}

void User::addToCos(Produse* produse)
{
	this->cos.push_back(produse);
}

void User::showCos()
{
	vector<Produse*>::iterator i;
	cout << "\n\tAfisare produse dein cos. " << endl;
	int count = 1;

	for (i = this->cos.begin(); i != this->cos.end(); i++)
	{
		cout << count << ". " << (*i)->toString() << endl;
		count++;
	}
}

void User::deleteProdusFromCos(vector<Produse*>& produseMagazin, int index) {
	produseMagazin.push_back(this->cos[index - 1]);
	this->cos[index - 1] = this->cos.back();
	this->cos.pop_back();
}

string User::prepareOrder(string adresa)
{
	string order;
	vector<Produse*>::iterator i;
	int count = 1;

	cout << "Adresa: ";
	cin >> adresa;
	getline(cin, adresa);

	order = "Comanda pentru: " + this->getNume() + " " + this->getPrenume() + "\nProduse comanda: \n";
	for (i = this->cos.begin(); i != this->cos.end(); i++)
	{
		order += (*i)->toString();
		order += "\n";
	}
	order += ("Adresa: ", adresa);


	return order;
}



User::~User() {}