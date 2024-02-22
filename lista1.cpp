#include <iostream>
#include <cmath>
double pierwsze(int x)
{
    return pow(-1,x+1)/(2*x-1);
}
double drugie(int x)
{
    return 4*pow(x,2)/(4*pow(x,2)-1);
}
double trzecie(int x)
{
    return 1/pow(2*x-1,2);
}

double sum(int start, int n, double (*func)(int))
{
    double suma = 0;
    for (int i = start; i<=n;i++)
        suma += func(i);
    return suma;
}
double product(int start, int n, double (*func)(int))
{
    double suma = 1;
    for (int i = start; i<=n;i++)
        suma *= func(i);
    return suma;
}

int main()
{
    std::cout<<4*sum(1,1000000, &pierwsze)<< std::endl <<2*product(1,1000000, &drugie) << std::endl <<pow(8*sum(1,1000000, &trzecie),0.5);
    return 0;
}
