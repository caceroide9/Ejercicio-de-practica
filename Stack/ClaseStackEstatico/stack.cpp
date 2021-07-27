#include "stack.h"

Stack::Stack()
{
    top = -1;
}

Stack::~Stack()
{
    //dtor
}

void Stack::Push(int e)
{
    top++;
    V[top] = e;
}

int Stack::Pop()
{
    int e = V[top];
    top--;
    return e;
}

bool Stack::Empty()
{
    return (top == -1);
}

