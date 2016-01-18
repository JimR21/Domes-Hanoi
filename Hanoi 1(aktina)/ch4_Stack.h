/***************************************************************************
Arxeio epikefalidas	: ch4_Stack.h
Syggrafeas			: Y. Cotronis
Skopos				: Ylopoihsh me pinaka, ATD Stoiva me Merikh Apokrypsh
Ana8ewrhsh          : X. Georgakopoylos, S. Gkiokas
****************************************************************************/

#ifndef __CH4_STACK__ 
#define __CH4_STACK__

/*dhlwseis typwn*/

#define PLITHOS 100 /*megisto epitrepto plh8os stoixeiwn ana stoiva*/
#include "TStoixeioyStoivas.h"
typedef struct {
	int korifi;
	TStoixeioyStoivas pinakas[PLITHOS];
} TStoivas;

/*dhlwseis synarthsewn*/

void Stoiva_dimiourgia(TStoivas *stoiva);
int  Stoiva_keni(TStoivas stoiva);
void Stoiva_PopValue(TStoivas stoiva, TStoixeioyStoivas *stoixeio, int *ypoxeilisi);
void Stoiva_PopState(TStoivas *stoiva, int *ypoxeilisi);
void Stoiva_othisi(TStoivas *stoiva,TStoixeioyStoivas stoixeio,int *yperxeilisi);

#endif /*#ifndef __CH4_STACK__ */
