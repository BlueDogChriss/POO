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
	
	cout << "\n";
	Meniu meniu;
	Login login;
	int i = 1;

	ComponenteGaming pici(100, 2, "2020", "OMEN", "HP", true, 4000, "PC", "Alb Inchis", 10, true, "AMD RX 5800", 1400, "AMD Ryzen 7", 4);
	ComponenteOffice iei(101, 3, "2018", "Pavilion", "HP", true, 4000, "Laptop", "Alb inchis", 2.2, "intel UHD 650", 512, true);
	ComponenteGaming pici2(102, 2, "2021", "ROG", "Asus", true, 5000, "Laptop", "Rosu", 3, true, "nVidia RTX 2070", 2400, "intel i7 9750", 5);
	ComponenteOffice iei2(103, 3, "2021", "Idea Tower", "Lenovo", true, 2500, "PC", "Albastru", 12.2, "intel UHD 700", 2000, true);

	vector<Produse *> produseDisponibile;

	produseDisponibile.push_back(&pici);
	produseDisponibile.push_back(&iei);
	produseDisponibile.push_back(&pici2);
	produseDisponibile.push_back(&iei2);

	while (i != 0) {


		login.login();
		i = meniu.alegeInput(0, 2);

		if (i == 1) {
			cout << "\n\t Te-ai autentificat ca angajat. E timpul sa iti configurezi profilul\t\n";
			Angajat angajat;
			angajat.setDataAngajare("01-01-2021");
			angajat.setSalariu(3000);
			angajat.setPrenume(meniu.addInformatie("Prenumele dvs: "));
			angajat.setNume(meniu.addInformatie("Numele dvs: "));
			angajat.setEmail(meniu.addInformatie("Emailul dvs: "));
			angajat.greeting();

			while (i != 0) {
				login.meniu(1);
				i = meniu.alegeInput(0, 6);
				if (i == 1) {
					login.showAllProduse(produseDisponibile);
				}
				else if (i == 2) {
					login.showProduseToAdd();
					i = meniu.alegeInput(1, 3);
					switch (i)
					{
					case 1:
						meniu.addProduseToMagazin(produseDisponibile, new ComponenteGaming());
						break;
					case 2:
						meniu.addProduseToMagazin(produseDisponibile, new ComponenteOffice());
						break;
					default:
						break;
					}
				}
				else if (i == 3) {
					login.showAllProduse(produseDisponibile);
					cout << "\n Ce produs vreti sa stergeti?\n";
					if (produseDisponibile.size())
					{
						i = meniu.alegeInput(1, produseDisponibile.size());
						meniu.deleteProduseFromMagazin(produseDisponibile, i);
					}
				}
				else if (i == 4) {
					login.showAllProduse(produseDisponibile);
					if (produseDisponibile.size()) {
						cout << "\nCe produs doriti sa editati?\n";
						i = meniu.alegeInput(1, produseDisponibile.size());
						meniu.editProduseFromMagazin(produseDisponibile, i);
					}
				}
				else if (i == 5) {
					meniu.viewComenzi(false);
				}
				else if (i == 6) {
					meniu.viewComenzi(true);
				}
			}
		}
		else if (i == 2)
			cout << "\n\t Esti pe profilul de Cumparator\n";
		User user;
		user.setPrenume(meniu.addInformatie("Prenumele dvs: "));
		user.setNume(meniu.addInformatie("Numele dvs: "));
		user.setEmail(meniu.addInformatie("Emailul dvs: "));
		user.greeting();

		while (i != 0) {
			login.meniu(2);
			i = meniu.alegeInput(0, 5);
			if (i == 1) {
				login.showAllProduse(produseDisponibile);
			}
			else if (i == 2) {
				if (produseDisponibile.size()) {
					login.addProduseToCos();
					i = meniu.alegeInput(1, produseDisponibile.size());
					user.addToCos(produseDisponibile[i--]);
					produseDisponibile[i--] = produseDisponibile.back();
					produseDisponibile.pop_back();
				}
				else {
					cout << "\n Magazinul e gol.\n";
				}
			}
			else if (i == 3) {
				user.showCos();
			}
			else if (i == 4) {
				user.showCos();
				cout << "\nCe produse vreti sa scoatetoi din cos?\n";
				i = meniu.alegeInput(1, user.getMarimeCos());
				user.deleteProdusFromCos(produseDisponibile, i);
			}
			else if (i == 5) {
				if (user.getMarimeCos()) {
					meniu.sendComanda(user);
				}
				else {
					cout << "\nCosul este gol.\n";
				}
			}
		}

	}
	cout << "\n Doriti sa continuati? 1=Da/0=Nu.\n";
	i = meniu.alegeInput(0, 1);


	
	cout << "\t\nIt ain't much, but it's honest work\t\n";
	system("pause>0");

}




