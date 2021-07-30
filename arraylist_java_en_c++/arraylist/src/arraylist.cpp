#include "arraylist.h"

#ifndef NULL
#define NULL 0
#endif

template <class T>
void arraylist<T>::resize()
{
    if (listsize == arrlength)
    {
        T *temp = new T[arrlength * 2];
        for (int i = 0; i < arrlength; i ++)
            temp[i] = data[i];
        data = temp;
        arrlength *= 2;
    }
}

template <class T>
bool arraylist<T>::needtoresize()
{
    return arrlength == listsize;
}

