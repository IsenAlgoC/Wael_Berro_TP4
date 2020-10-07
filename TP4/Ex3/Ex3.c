#include<stdio.h>
#include<stdlib.h>

int main()
{
	char Prenom;
	char Nom;
	char reponse;
	printf("Votre nom svp : ");
	scanf_s("%c", &Nom);
	printf("Votre prenom svp : ");
	scanf_s("%c", &Prenom);
	reponse = _getch();
	if (reponse == 'H')
	{
		printf("Monsieur %c %c", Nom, Prenom);
	}
	if (reponse == 'F')
	{
		printf("Madame %c %c", Nom, Prenom");
	}
}
