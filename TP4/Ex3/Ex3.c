#include<stdio.h>
#include<stdlib.h>

int main()
{
	char Prenom[20];
	char Nom[20];
	char reponse;
	char sexe[20];
	printf("\nVotre genre svp : ");
	reponse = _getch();
	printf("\nVotre nom svp : ");
	scanf_s("%c", Nom);
	printf("\nVotre prenom svp : ");
	scanf_s("%c", Prenom);
	
	switch (reponse)
	{
	case 'H': 
		sexe = 'Monsieur';
	case 'F':
		sexe = 'Madame';
	}
	printf(%s %s %s, sexe, Nom, Prenom);
}
