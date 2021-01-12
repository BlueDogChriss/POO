//Realizati un program care tine evidenta produselor vandute de o brutarie

#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)
typedef struct {
	char is;
	int cod;  //codul produsului
	char nume[30];  //numele produsului
	int an; //anu fabricatiei
	int durata;  //durata pana la expirare in zile
	int pret;
	char tprod[10];  //tipul produsului
	struct luni {
		int luna1;
		int luna2;
		int luna3;
	} vanzari;
} brutarie;


int nr_art(FILE* f, int p)
{
	int l, m;
	l = ftell(f);
	fseek(f, 0, 2);
	m = ftell(f) / p;
	fseek(f, l, 0);
	return m;
}
void populare()
{
	FILE* f;
	brutarie a;
	int n, i, er;
	char nume_f[20];
	printf("\nnume fisier:");
	gets_s(nume_f);
	f = fopen(nume_f, "wb+");
	int nr = sizeof(brutarie);
	printf("n="); scanf_s("%d", &n);
	while (!feof(stdin))
	{
		if (n > nr_art(f, sizeof(brutarie)))
		{
			fseek(f, 0, 2);
			a.is = 0;
			for (i = nr_art(f, sizeof(brutarie)); i < n; i++)
				fwrite(&a, sizeof(brutarie), 1, f);
			fseek(f, (n - 1) * sizeof(brutarie), 0);
			a.is = 1;
			a.cod = n;
			printf("Numele produsului="); getc(stdin); gets_s(a.nume);
			printf("Pretul produsului="); scanf_s("%d", &a.pret);
			printf("Anul fabricatiei al produsului="); scanf_s("%d", &a.an);
			printf("Durata de valabilitate a produsului="); scanf_s("%d", &a.durata);
			printf("Tipul produsului="); getc(stdin); gets_s(a.tprod);
			printf("Vanzarile pe trei luni: \n");
			printf("Luna 1: ");
			scanf("%d", &a.vanzari.luna1);
			printf("Luna 2: ");
			scanf("%d", &a.vanzari.luna2);
			printf("Luna 3: ");
			scanf("%d", &a.vanzari.luna3);

			fwrite(&a, sizeof(brutarie), 1, f);
		}
		else {
			fseek(f, (n - 1) * sizeof(brutarie), 0);
			fread(&a, sizeof(brutarie), 1, f);
			if (a.is == 0) {
				a.is = 1;
				a.cod = n;
				printf("Numele produsului="); getc(stdin); gets_s(a.nume);
				printf("Pretul produsului="); scanf_s("%d", &a.pret);
				printf("Anul fabricatiei al produsului="); scanf_s("%d", &a.an);
				printf("Durata de valabilitate a produsului="); scanf_s("%d", &a.durata);
				printf("Tipul produsului="); getc(stdin); gets_s(a.tprod);
				printf("Vanzarile pe trei luni: \n");
				printf("Luna 1: ");
				scanf("%d", &a.vanzari.luna1);
				printf("Luna 2: ");
				scanf("%d", &a.vanzari.luna2);
				printf("Luna 3: ");
				scanf("%d", &a.vanzari.luna3);
				fseek(f, (n - 1) * sizeof(brutarie), 0);
				fwrite(&a, sizeof(brutarie), 1, f);
			}
			else printf("inreg. exista deja\n");
		}
		printf("\nn="); scanf_s("%d", &n);
	}
	fclose(f);
}




void adaugare()
{
	FILE* f;
	brutarie a;
	int n, i, er;
	char nume_f[20];
	int nr = sizeof(brutarie);
	printf("\nnume fisier:");
	gets_s(nume_f);
	f = fopen(nume_f, "rb+");
	if (f == NULL) f = fopen(nume_f, "wb+");
	printf("n="); scanf_s("%d", &n);
	while (!feof(stdin))
	{
		if (n > nr_art(f, sizeof(brutarie)))
		{
			fseek(f, 0, 2);
			a.is = 0;
			for (i = nr_art(f, sizeof(brutarie)); i < n; i++)
				fwrite(&a, sizeof(brutarie), 1, f);
			fseek(f, (n - 1) * sizeof(brutarie), 0);
			a.is = 1;
			a.cod = n;
			printf("Numele produsului="); getc(stdin); gets_s(a.nume);
			printf("Pretul produsului="); scanf_s("%d", &a.pret);
			printf("Anul fabricatiei al produsului="); scanf_s("%d", &a.an);
			printf("Durata de valabilitate a produsului="); scanf_s("%d", &a.durata);
			printf("Tipul produsului="); getc(stdin); gets_s(a.tprod);
			printf("Luna 1: ");
			scanf("%d", &a.vanzari.luna1);
			printf("Luna 2: ");
			scanf("%d", &a.vanzari.luna2);
			printf("Luna 3: ");
			scanf("%d", &a.vanzari.luna3);
			fwrite(&a, sizeof(brutarie), 1, f);
		}
		else {
			fseek(f, (n - 1) * sizeof(brutarie), 0);
			fread(&a, sizeof(brutarie), 1, f);
			if (a.is == 0) {
				a.is = 1;
				a.cod = n;
				printf("Numele produsului="); getc(stdin); gets_s(a.nume);
				printf("Pretul produsului="); scanf_s("%d", &a.pret);
				printf("Anul fabricatiei al produsului="); scanf_s("%d", &a.an);
				printf("Durata de valabilitate a produsului="); scanf_s("%d", &a.durata);
				printf("Tipul produsului="); getc(stdin); gets_s(a.tprod);
				printf("Luna 1: ");
				scanf("%d", &a.vanzari.luna1);
				printf("Luna 2: ");
				scanf("%d", &a.vanzari.luna2);
				printf("Luna 3: ");
				scanf("%d", &a.vanzari.luna3);
				fseek(f, (n - 1) * sizeof(brutarie), 0);
				fwrite(&a, sizeof(brutarie), 1, f);
			}
			else printf("inreg. exista\n");
		}
		printf("\nn="); scanf_s("%d", &n);
	}
	fclose(f);
}
void afisare()
{
	FILE* f, * g, * j;
	brutarie a;
	char nume_f[20];
	printf("\nnume fisier:");
	gets_s(nume_f);
	if (!(f = fopen(nume_f, "rb"))) printf("nu exista fisierul");
	else {
		printf("\n***************************afisarea inregistrarilor din fisier*************");
		g = fopen("raport_brutarie.txt", "w");
		j = fopen("raport_brutarie_1pe2.txt", "w");
		printf("\n ");
		fprintf(g, " LISTA inghetataI \n ");
		fprintf(g, "*******************************************************************************************************************\n ");
		fprintf(g, " Nr. cod   || Nume  ||      Pret     || Anul || Durata || Tipul || Luna 1 || Luna 2 || Luna 3 \n ");
		fprintf(g, "*******************************************************************************************************************\n ");
		fprintf(j, " Lista produseI \n ");
		fprintf(j, "*******************************************************************************************************************\n ");
		fprintf(j, "  Nume || Tipul  \n ");
		fprintf(j, "*******************************************************************************************************************\n ");
		printf(" Lista produseI \n ");
		printf("***********************************************************************************************************************\n ");
		printf(" Nr cod   || Nume  ||      Pret     || Anul || Durata || Tipul || Luna 1 || Luna 2 || Luna 3  \n ");
		printf("***********************************************************************************************************************\n ");
		fread(&a, sizeof(brutarie), 1, f);
		while (!feof(f))
		{
			if (a.is == 1)
			{
				printf("\nn%5d   || %-20s  ||   %5d   ||  %5d   ||  %5d   || %-20s   ||  %2d  ||  %2d  ||  %4d", a.cod, a.nume, a.pret, a.an, a.durata, a.tprod, a.vanzari.luna1, a.vanzari.luna2, a.vanzari.luna3);
				fprintf(g, "\nn%5d ||%-20s ||   %5d   ||  %5d   ||  %5d   || %-20s   ||  %2d  ||  %2d  ||  %4d", a.cod, a.nume, a.pret, a.an, a.durata, a.tprod, a.vanzari.luna1, a.vanzari.luna2, a.vanzari.luna3);
				fprintf(j, "\n%-20s ||%-20s", a.nume, a.tprod);
			}
			fread(&a, sizeof(brutarie), 1, f);
		}
		fclose(f); fclose(g); fclose(j);
	}
}




void afisare_brutarie()
{

	FILE* f, * g, * j;
	brutarie a;
	int pc; //pretul pe care il introducem de la tastatura (pretul de margine)
	char nume_f[20];
	printf("\nnume fisier:");
	gets_s(nume_f);
	if (!(f = fopen(nume_f, "rb"))) printf("nu exista fisierul");
	else {

		printf("\n***************************afisarea inregistrarilor din fisier*************");
		g = fopen("raport_brutarie.txt", "w");
		j = fopen("raport_brutarie_1pe2.txt", "w");
		printf("\n ");
		fprintf(g, " Lista ProduseI \n ");
		fprintf(g, "*******************************************************************************************************************\n ");
		fprintf(g, " Nr. cod   || Nume ||      Pret     || Anul || Durata || Tipul || Luna 1 || Luna 2 || Luna 3 \n ");
		fprintf(g, "*******************************************************************************************************************\n ");
		fprintf(j, " LISTA inghetataI \n ");
		fprintf(j, "*******************************************************************************************************************\n ");
		fprintf(j, "  NUME || Aroma  \n ");
		fprintf(j, "*******************************************************************************************************************\n ");
		printf(" LISTA inghetataI \n ");
		printf("***********************************************************************************************************************\n ");
		printf("Nr. cod   || Nume ||      Pret     || Anul || Durata || Tipul || Luna 1 || Luna 2 || Luna 3 \n ");
		printf("***********************************************************************************************************************\n ");
		fread(&a, sizeof(brutarie), 1, f);

		printf("(Se vor arata produsele de patiserie ce au pretul peste pretul de margine)\nPretul de margine="); scanf_s("%d", &pc);
		while (!feof(f))

		{


			if (a.is == 1)
			{
				if (a.pret >= pc) {
					printf("\nn%5d   || %-20s  ||  %5d  ||  %5d   ||  %5d   ||%-20s   ||  %2d ||   %2d ||  %4d", a.cod, a.nume, a.pret, a.an, a.durata, a.tprod, a.vanzari.luna1, a.vanzari.luna2, a.vanzari.luna3);
					fprintf(g, "\nn%5d ||%-20s ||  %5d  ||  %5d  ||  %5d   ||%-20s   |  %2d || %2d || %4d", a.cod, a.nume, a.pret, a.an, a.durata, a.tprod, a.vanzari.luna1, a.vanzari.luna2, a.vanzari.luna3);
					fprintf(j, "\n%-20s ||%-20s", a.nume, a.tprod);
				}
			}
			fread(&a, sizeof(brutarie), 1, f);
		}

		fclose(f); fclose(g); fclose(j);


	}
}

void sterge_brutarie()
{
	FILE* f;
	brutarie a;
	int nr_cod;
	char nume_f[20];
	printf("\nNumele fisierului din care doriti sa stergeti date "); gets_s(nume_f);
	if (!(f = fopen(nume_f, "rb+"))) printf("nu exista fisierul");
	else {
		printf("\nStergerea inregistrarilor a caror pozitie o citesc de la tastatura");
		printf("\nnr_cod="); scanf("%d", &nr_cod);
		while (!feof(stdin))
		{
			if (nr_cod > nr_art(f, sizeof(brutarie))) printf("depaseste lungimea fis.");
			else
			{
				fseek(f, (nr_cod - 1) * sizeof(brutarie), 0);
				fread(&a, sizeof(brutarie), 1, f);
				if (a.is == 1)
				{
					printf("\n%5d|| %-20s ||%-20s\n", a.cod, a.nume, a.tprod);
					a.is = 0;
					fseek(f, (nr_cod - 1) * sizeof(brutarie), 0);
					fwrite(&a, sizeof(brutarie), 1, f);
				}
				else printf("inreg. nu exista");
			}
			printf("\nnr_cod="); scanf("%d", &nr_cod);
		}
		fclose(f);
	}
}


void main()
{
	int x;
	printf("\nIntroduceti cifra operatiei:\nPopulare->1\nAdaugare->2\nAfisare->3\nAfisare_Brutarie->4\nStergere_brutarie->5\nIesire->0\n");
	scanf_s("%d", &x);
	while (x)
	{
		switch (x)
		{
		case 1:
			getchar();
			populare();
			break;
		case 2:
			getchar();
			adaugare();
			break;
		case 3:
			getchar();
			afisare();
			break;
		case 4:
			getchar();
			afisare_brutarie();
			break;
		case 5:
			getchar();
			sterge_brutarie();
			break;
		default:
			printf("Optiune nu exista\n");
		}
		printf("\nIntroduceti cifra operatiei:\nPopulare->1\nAdaugare->2\nAfisare->3\nAfisare_Brutarie->4\nStergere_brutarie->5\nIesire->0\n");
		scanf_s("%d", &x);
	}
}


