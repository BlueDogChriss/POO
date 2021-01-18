#include<iostream>
#include<string>
#include<fstream>
#include<list>
#include"user.h"
#include"login.h"
#include"meniu.h"
#include"produse.h"
#include"credentiale.h"
#include"admin.h"
#include"pc.h"
#include"login.h"
#include"componenteGaming.h"
#include"componenteOffice.h"
#include"IProduse.h"

using namespace std;

int main()
{

	cout << "test\n";
	Meniu meniu;
	Login login;
	int i=1;

	ComponenteGaming pici(100, 2, "2020", "OMEN", "HP", true, "PC", "Alb Inchis", 10, true, "AMD RX 5800", 1400, "AMD Ryzen 7", 4);

	vector<Produse *> produseDisponibile;

	produseDisponibile.push_back(&pici);

	while (i != 0) {


		login.login();
		i = meniu.alegeInput(0, 2);

		if (i == 1) {

			cout << "\n\t Esti pe profilul de Angajat\n";

			while (i != 0) {
				login.meniu(1);
				i = meniu.alegeInput(0, 6);
				if (i == 1) {
					cout << "test\n";
				}
				else if (i == 2) {
					cout << "Aratati toate produsele\n";
					i = meniu.alegeInput(1, 3);
					switch (i)
					{
					case 1:
						cout << "caz1\n";
						break;
					case 2:
						cout << "caz2\n";
						break;
					case 3:
						cout << "caz3\n";
						break;
					default:
						break;
					}
				}
				else if (i == 3) {
					cout << "\nCe produs doriti sa stergeti?\n";
				}
				else if (i == 4) {
					cout << "\nCe produs doriti sa editati?\n";
				}
				else if (i == 5) {
					cout << "\nAfisare comenzi false\n";
				}
				else if (i == 6) {
					cout << "\nAfisare comenzi true\n";
				}
			}
		}
		else if (i == 2)
			cout << "\n\t Esti pe profilul de Cumparator\n";
		while (i != 0) {
			login.meniu(2);
			i = meniu.alegeInput(0, 5);
			if (i == 1) {
				cout << "\nProduse disponibile\n";
			}
			else if (i == 2) {
				cout << "produse disp!\n";
			}
			else if (i == 3) {
				cout << "afisare cos:\n";
			}
			else if (i == 4) {
				cout << "Ce produse doriti sa stergeti\n";
			}
			else if (i == 5) {
				cout << "Nu aveti produse in cos!\n";
			}
		}

	}


	cout << "\t\nIt ain't much, but it's honest work\t\n";
	system("pause>0");
}


