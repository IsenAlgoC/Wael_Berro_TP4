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
	duree.minute = 0;
	duree.heure = 4;
	heurefin.minute = duree.minute + heuredebut.minute;
	heurefin.heure = duree.heure + heuredebut.heure;
	if (heurefin.minute > 59)
	{
		heurefin.minute = heurefin.minute - 60;
		heurefin.heure = heurefin.heure + 1;
	}
	if (heurefin.heure > 24)
	{
		heurefin.heure = heurefin.heure - 24;
	}
	printf("/nVoici la nouvelle heure %d:%d", heurefin.heure, heurefin.minute);
}