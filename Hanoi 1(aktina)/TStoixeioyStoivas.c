/***************************************************************************
Arxeio ylopihshs	: TStoixeioyStoivas.h
Syggrafeas			: Y. Cotronis
Skopos				: Ylipoiei praxeis toy Typoy Stoixeioy ths Stoivas (int)
Ana8ewrhsh          : X. Georgakopoylos, S. Gkiokas
****************************************************************************/
#include "TStoixeioyStoivas.h"

void TSstoiva_setValues (TStoixeioyStoivas *target, TStoixeioyStoivas source)
{
	*target=source;
}

void TSstoiva_readValue (FILE *from, TStoixeioyStoivas *ElemPtr)
{
     fscanf(from, "%d", ElemPtr);
}

void TSstoiva_writeValue (FILE *to, TStoixeioyStoivas Elem)
{
	fprintf(to, "%d\n", Elem);
}

int mikrotero(TStoixeioyStoivas left, TStoixeioyStoivas right) {
	if(left < right) {
		return 1;
	}
	else return 0;
}
