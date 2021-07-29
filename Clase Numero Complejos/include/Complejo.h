#ifndef COMPLEJO_H
#define COMPLEJO_H


class Complejo
{
    public:
        Complejo();
        void setreal(int);
        void setimag(int);
        int getreal();
        int getimag();
        void ver();
        float modulo();
        void conjugado();
    protected:
    private:
        int real;
        int imag;

};

#endif // COMPLEJO_H
