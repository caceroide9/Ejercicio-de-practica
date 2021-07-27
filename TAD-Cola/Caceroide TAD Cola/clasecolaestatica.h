#ifndef CLASECOLAESTATICA_H
#define CLASECOLAESTATICA_H

#define MAX 100

class ClaseColaEstatica
{
    public:
        ClaseColaEstatica();
        virtual ~ClaseColaEstatica();
        void agregar(int e);
		int extraer();
		bool vacia();
    protected:
    private:
        int mDato[MAX];
		int mUno, mEne;
};

#endif // CLASECOLAESTATICA_H
