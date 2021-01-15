#include <iostream>
#include<string>
#include<fstream>
#include<list>
#include"user.h"
#include"login.h"
#include"meniu.h"

using namespace std;


int main()
{
	cout << "test";
	Meniu meniu;
	Login login;
	int i;

	login.login();
	i = meniu.alegeInput(1, 2);

	if (i == 1)
		login.meniu(1);
	else if (i == 2)
		login.meniu(2);





	system("pause>0");
}


