#include<iostream>
#include<string>
#include<iterator>
#include"meniu.h"
#include"produse.h"
#include"pc.h"
#include"componenteGaming.h"
#include"componenteOffice.h"

using namespace std;

int Meniu::alegeInput(int start, int finish) {
    int i;
    bool wrong = false;
    do {
        if (wrong) {
            cout << "\nAi gresit numarul, baiatul meu :(\n" << endl;
        }
        cout << "\nAlege optiune: ";
        cin >> i;
        wrong = true;
    } while (i < start || i > finish);
    system("CLS");

    return i;

}

string Meniu::addInformatie(string s)
{
    cout << "\n" << s;
    string i;
    cin >> i;
    return i;
}
void Meniu::getProduse()
{
    ifstream in;
    string item;
    in.open("produse.bin", ios::in | ios::binary);
    if (in.fail())
    {
        cout << "Nu a functionat, am esuat!";
        exit(1);
    }
    while (getline(in, item))
    {
        cout << item << endl;
    }
    in.close();
}

void Meniu::addProduse(Produse* produse)
{
    ofstream out("produse.bin", ios::binary | ios_base::app);
    out.write((char*)produse, sizeof(produse));
    out.close();
}

void Meniu::readProduse()
{
    ifstream f("produse.bin", ios::binary);
    if (f.is_open())
    {
        f.seekg(0, ios::beg);
        Produse* aux;
        while (!f.eof())
        {
            f.read((char*)&aux, sizeof(Produse*));
            cout << aux->getDenumire();
        }
        cout << endl;
        f.close();
    }
    else
        cerr << "Nu se deschide usa la carutu de la Kaufland";
}

void Meniu::addProduseToMagazin(vector<Produse*>& produseDisponibile, Produse* const& produse)
{
    produse->setAttributes();
    produseDisponibile.push_back(produse);
    this->saveProdus(produse);
}

void Meniu::saveProdus(Produse* produse) {
    ofstream out;
    out.open("produses.bin", ios::out | ios::binary | ios_base::app);

    out << produse->toString() << endl;

    out.close();
}

void Meniu::deleteToateProdusele()
{
    ofstream out;
    out.open("produse.bin");
    out << "*nothing to see here*";
    out.close();
}

void Meniu::deleteProduseFromMagazin(vector<Produse*>& produseDisponibile, int i)
{
    produseDisponibile[i--] = produseDisponibile.back();
    produseDisponibile.pop_back();
}

void Meniu::editProduseFromMagazin(vector<Produse*>& produseDisponibile, int i)
{
    produseDisponibile[i--]->setAttributes();
}

void Meniu::sendComanda(User u)
{
    ofstream out;
    int size;
    string adresa;

    cout << "\n Adresa ta: ";
    getline(cin, adresa);
    size = u.prepareOrder(adresa).size();

    out.open("comenzi.bin", ios::binary | ios::app);
    out.write((char*)&size, sizeof(int));
    out.write((char*)&u.prepareOrder(adresa)[0], size);
    out.close();

    out.open("comanda" + u.getNume() + u.getPrenume() + ".txt", ios::app);
    out.write((char*)&size, sizeof(int));
    out.write((char*)&u.prepareOrder(adresa)[0], size);
    cout << "Detalii comanda trimise la " + u.getEmail() << endl;
    out.close();
}

void Meniu::viewComenzi(bool print) {
    ifstream infile("comenzi.bin", ifstream::binary);
    float size;
    string s;
    if (infile.is_open()) {
        infile.read(reinterpret_cast<char*>(&size), sizeof(size));
        s.resize(9999);
        s[size] = '\0';
        infile.read(&s[0], s.size());
        if (!print) {
            cout << s;
        };
        if (print) {
            printComenzi(s);
        }
        infile.close();
    }
    else
        cerr << "Eroare la deschiderea fisier .dat";
}

void Meniu::printComenzi(string s) {
    ofstream out;
    int size;
    size = s.size();

    out.open("comenzi.txt", ios::out);
    out.write((char*)&size, sizeof(int));
    out.write((char*)&s[0], size);
    cout << "\nFisierul comenzi.txt a fost creat!\n";
}

