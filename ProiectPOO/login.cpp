#include<iostream>
#include "login.h"

using namespace std;

void Login::login(){
	cout << "Pagina Login\n";
	cout << "Alegeti tipul de utilizator\n";
	cout << "  1. Angajat\n";
	cout << "  2. Client\n";
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