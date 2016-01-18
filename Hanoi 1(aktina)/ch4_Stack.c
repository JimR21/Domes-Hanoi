/***************************************************************************
Arxeio ylopoihshs	: ch4_Stack.c
Syggrafeas			: N. Misyrlhs , Y. Cotronis
Skopos				: Ylopoihsh me pinaka, ATD Stoiva me Merikh Apokrypsh
Ana8ewrhsh          : X. Georgakopoylos, S. Gkiokas
****************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include "ch4_Stack.h"

/*orismos synarthsewn*/

void Stoiva_dimiourgia(TStoivas *stoiva)
{
 /*
 *	Pro: 		Kamia
 *	Meta: 		Dhmioyrgia kenhs stoivas
*/
	stoiva->korifi = -1;
}

int  Stoiva_keni(TStoivas stoiva)
{
 /*
 *	Pro: 	    Dhmioyrgia ths stoiva
 *	Meta: 		Epistrefei 1 an h stoiva einai kenh alliws 0
*/
	return (stoiva.korifi == -1);
}


void Stoiva_PopValue(TStoivas stoiva, TStoixeioyStoivas *stoixeio, int *ypoxeilisi) {
      if (Stoiva_keni(stoiva))
			*ypoxeilisi = 1;
	  else
		{
		*ypoxeilisi = 0;
		TSstoiva_setValues(stoixeio, stoiva.pinakas[stoiva.korifi]);
	}
}

void Stoiva_PopState(TStoivas *stoiva, int *ypoxeilisi) {
      if (Stoiva_keni(*stoiva))
			*ypoxeilisi = 1;
	  else
		{
		*ypoxeilisi = 0;
		stoiva->korifi--;
	}
}



void Stoiva_othisi(TStoivas *stoiva,TStoixeioyStoivas stoixeio,int *yperxeilisi)
{
 /*
 *	Pro: 		Dhmioyrgia ths stoiva
 *	Meta: 		Wtheitai to stoixeio sth stoiva
*/
	if (stoiva->korifi == PLITHOS -1)
		*yperxeilisi = 1;
	else
	{
		*yperxeilisi = 0;
		stoiva->korifi++;
		TSstoiva_setValues(&(stoiva->pinakas[stoiva->korifi]), stoixeio);
/* debug
		printf("O|"); TSstoiva_writeValue(stoixeio); printf("|O\n");
		printf("O|"); TSstoiva_writeValue(stoiva->pinakas[stoiva->korifi]); printf("|O\n");
*/
	}
}


