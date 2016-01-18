/*****************************************************
Arxeio ylopoihshs	: Hanoi.c
Syggrafeas			: Dimitris Kavvathas
Skopos				: Skeleton program gia Ylopoihsh Algorithmoy Hanoi me Stoives
******************************************************/

#include <stdio.h>
#include "ch4_Stack.h"
#include "TStoixeioyStoivas.h"

void Input(FILE * from, TStoivas *S, int *n);
void Output(FILE * to, TStoivas *S);
void Move(TStoivas *from, TStoivas *to);
void recursiveHanoi(int level, TStoivas *from, TStoivas *to, TStoivas *with);

int main(void){
	int n;
	TStoivas stoivaA, stoivaB, stoivaC;
	FILE *from, *to;
	Stoiva_dimiourgia(&stoivaA);
	Stoiva_dimiourgia(&stoivaB);
	Stoiva_dimiourgia(&stoivaC);
	Input (from, &stoivaA, &n);
	recursiveHanoi(n, &stoivaA, &stoivaC, &stoivaB);
	Output (to, &stoivaC);
	return 0;
	}

void Input(FILE *from, TStoivas *S, int *n) {
/* Diavazei stoixeia apo to from kai ta wthei sthn S.
   Epistrefei ton arithmo twn stoixeiwn poy wthhse
*/
int uperxeilish;
TStoixeioyStoivas ar;
from = fopen("from.txt", "r");
*n = 0;
while ((feof(from) == 0)) {
	TSstoiva_readValue(from, &ar);
	if ((mikrotero(ar, S->pinakas[S->korifi])) == 1 || *n == 0) {
		Stoiva_othisi(S, ar, &uperxeilish);
		if (uperxeilish == 1) {
			printf("ERROR: Yperxeilish Stoivas");
			break;
		}
		*n = *n+1;
	}
}
	fclose(from);
}


void Move(TStoivas *Source, TStoivas *Target) {
/* Metaferei ena stoixeio apo thn stoiva Source sthn Target */
	int upoxeilish, uperxeilish;
	TStoixeioyStoivas ar;
    Stoiva_PopValue(*Source, &ar, &upoxeilish);
	Stoiva_PopState(Source, &upoxeilish);
	if (upoxeilish == 1) {
		printf("ERROR: Ypoxeilish Stoivas");
	}
	Stoiva_othisi(Target, ar, &uperxeilish);
	if (uperxeilish == 1) {
			printf("ERROR: Yperxeilish Stoivas");
		}
}

void recursiveHanoi(int level, TStoivas *from, TStoivas *to, TStoivas *with) {
/* Level einai o arithmos twn diskwn kai
   from o arxikh stoiva , to h telikh kai with h bohuhtikh
*/
     if (level >= 1) {
        recursiveHanoi(level - 1, from, with, to);
        Move(from, to);
        recursiveHanoi(level - 1, with, to, from);
     }
}

void Output(FILE *to, TStoivas *S){
/* Exagei stoixeia apo thn S kai ta ektypvnei sto to */
int upoxeilish;
TStoixeioyStoivas ar;
to = fopen("to.txt", "w");
do {
    Stoiva_PopValue(*S, &ar, &upoxeilish);
	Stoiva_PopState(S, &upoxeilish);
	if (upoxeilish == 1) {
		printf("ERROR: Ypoxeilish Stoivas");
		break;
	}
	TSstoiva_writeValue(to, ar);
} while (S->korifi >= 0);
fclose(to);
}
