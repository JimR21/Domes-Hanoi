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
     fscanf(from, "%d %d", &ElemPtr->aktina, &ElemPtr->height);
}

void TSstoiva_writeValue (FILE *to, TStoixeioyStoivas Elem)
{
	fprintf(to, "%d %d\n", Elem.aktina, Elem.height);
}

int mikrotero(TStoixeioyStoivas left, TStoixeioyStoivas right) {
	int vl, vr;
	vl = left.aktina * left.aktina * left.height;                      /*ogkos kulindrou = 3.14 * r^2 * height. to 3.14 den xreiazetai na to grapsoume gia na ta sugrinoume */
	vr = right.aktina* right.aktina * right.height;
	if(vl < vr) {
		return 1;
	}
	else return 0;
}
