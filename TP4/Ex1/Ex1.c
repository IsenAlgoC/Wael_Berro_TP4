#include<stdlib.h>
#include<stdio.h>
#include "TP4.h"

int main()
{
	HEURE heuredebut, heurefin, duree;
	heuredebut.heure = 12;
	heuredebut.minute = 30;
	heurefin.heure = 0;
	heurefin.minute = 0;
	printf("/nHeure � ajouter : ");
	scanf_s("%d", &duree.minute);
	printf("/nMinutes � ajouter : ");
	scanf_s("%d", &duree.minute);
	heurefin.minute = duree.minute + heuredebut.minute;
	heurefin.heure = duree.heure + heuredebut.heure;
	while (heurefin.minute > 59)
	{
		heurefin.minute = heurefin.minute - 60;
		heurefin.heure = heurefin.heure + 1;
	}
	while (heurefin.heure > 24)
	{
		heurefin.heure = heurefin.heure - 24;
	}
	printf("/nVoici la nouvelle heure %d:%d", heurefin.heure, huerefin.minute);
}