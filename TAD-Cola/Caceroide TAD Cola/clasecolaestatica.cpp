#include "clasecolaestatica.h"

ClaseColaEstatica::ClaseColaEstatica()
{
    mUno = 0;
    mEne = MAX-1;
}

ClaseColaEstatica::~ClaseColaEstatica()
{
    //dtor
}

void ClaseColaEstatica::agregar(int e)
{
	mEne = (mEne + 1) % MAX;

	mDato[mEne] = e;
}

int ClaseColaEstatica::extraer()
{
	int temp = mDato[mUno];
	mUno = (mUno + 1) % MAX;

	return temp;
}

bool ClaseColaEstatica::vacia()
{
	return (mUno == (mEne + 1) % MAX);
}
