#ifndef STACK_H
#define STACK_H

class Stack
{
    public:
        Stack();
        virtual ~Stack();
        void Push(int);
        int Pop();
        bool Empty();
    protected:
    private:
        int top;
        int V[30];
};

#endif // STACK_H
