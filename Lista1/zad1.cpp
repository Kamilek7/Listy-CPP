// Kamil Jarocki

// ZAD 1

#include <iostream>
#include <cmath>
double pierwsze(int n)
{
    double q = 1.0 / (2.0 * n - 1.0);
    return (n % 2 == 0) ? -q : q;
}
double drugie(int n)
{
    double x = n;
    return 4.0 * x * x/(4.0 * x * x - 1.0);
}
double trzecie(int n)
{
    double x = 2.0 * n - 1.0;
    return 1.0/(x * x);
}
double sum(int start, int n, double (*func)(int))
{
    double suma = 0;
    for (int i = start; i <=n; i++)
        suma += func(i);
    return suma;
}
double product(int start, int n, double (*func)(int))
{
    double suma = 1;
    for (int i = start; i <= n; i++)
        suma *= func(i);
    return suma;
}
int main()
{
    std::cout.precision(10);
    std::cout << 4*sum(1,1000000, &pierwsze)<< "\n"
              << 2*product(1,1000000, &drugie) << "\n"
              << std::sqrt((8*sum(1,1000000, &trzecie))) << "\n";
    return 0;
}
