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
	duree.heure = 0;
	duree.minute = 45;
	heurefin.minute = duree.minute + heuredebut.minute;
	if (heurefin.minute > 59)
	{
		heurefin.minute = heurefin.minute - 60;
		heurefin.heure = heurefin.heure + 1;
	}

}