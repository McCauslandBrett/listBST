#include "process.h"
struct Process
{
    virtual void operator()(node<T>*& n)=0;
    virtual~Process();
};
struct Printf:public Process
{
    virtual void operator()(node<T>*& n)
    {
        cout<<*n;
    }
};

