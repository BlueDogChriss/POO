#include<iostream>
#include"meniu.h"

using namespace std;

int Meniu::alegeInput(int start, int finish) {
	int i;
	bool wrong=false;
    do {
        if (wrong) {
            cout << "\nAi gresit numarul, baiatul meu :(\n" << endl;
        }
        cout << "\nAlege optiune: ";
        cin >> i;
        wrong = true;
    } while (i < start || i > finish);

    return i;

}