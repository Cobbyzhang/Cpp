#include<iostream>

int *reset(int *);
double *reset(double *);

int main()
{
    int a = 123;
    int *aa = &a;
    double b=12.312,*bb=&b;
    aa = reset(aa);
    bb = reset(bb);    
    return 0;
}



int *reset(int *a)
{
    std::cout<< *a << std::endl;
    return a;
}

double *reset(double* a)
{
    std::cout<< *a << std::endl;
    return a;
    return a;
}

