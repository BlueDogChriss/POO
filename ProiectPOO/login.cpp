#include<iostream>
#include "login.h"

using namespace std;

void Login::login() {
    cout << "Pagina Login\n";
    cout << "Alegeti tipul de utilizator\n";
    cout << "  1. Angajat\n";
    cout << "  2. Client\n";
    cout << "  0. Exit\n";
}

void Login::meniu(int tipUser) {
    if (tipUser == 1) {
        cout << "\nCe actiune doriti sa realizati?\n";
        cout << "1. Afiseaza produse\n";
        cout << "2. Adauga produs in magazin\n";
        cout << "3. Sterge produs din magazin\n";
        cout << "4. Editeaza produse din magazin\n";
        cout << "0. Exit\n";
    }
    else if (tipUser == 2) {
        cout << "\nCe actiune doriti sa realizati?\n";
        cout << "1. Afiseaza produse\n";
        cout << "2. Adauga produs in cos\n";
        cout << "3. Afiseaza produse din cos\n";
        cout << "4. Sterge produs din cos\n";
        cout << "0. Exit\n";
    }
    else cout << "Input Gresit! Va rugam reintroduceti!\n";
}

void Login::showProduseToAdd()
{
    cout << endl << "Ce tip de produs doriti sa adaugati?\n";
    cout << "1. PC/Laptop Gaming\n";
    cout << "2. PC/Laptop Office\n";
}

void Login::showAllProduse(vector<Produse*> produse)
{
    vector<Produse*>::iterator i;
    cout << "\nAfisare produse disp\n";
    int count = 1;
    if (produse.size())
    {
        for (i = produse.begin(); i != produse.end(); i++)
        {
            cout << count << ". " << (*i)->toString() << endl;
            count++;
        }
    }
    else cout << "\n\tNu avem produse disp mom\t\n";
}

void Login::addProduseToCos()
{
    cout << "\t\nIntroduceti numarul produsului din magazin: \t\n";
}