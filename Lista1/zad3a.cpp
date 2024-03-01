// ZAD 3 (wersja double)

#include <iostream>
#include <cmath>
double down(int n)
{
    double suma = 0;
    for (int i = 1; i<=n; i++)
        suma += (double)1/i;
    return suma;
}

double up(int n)
{
    double suma = 0;
    for (int i = n; i>=1;i--)
        suma += (double)1/i;
    return suma;
}

int main()
{
    std::cout << "Down" << "\tUp\tDown - Up\n";
    std::cout << down(100) << "\t" << up(100) << "\t" << down(100)-up(100) << std::endl;
    std::cout << down(100000) << "\t" << up(100000) << "\t" << down(100000)-up(100000) << std::endl;
    std::cout << down(100000000) << "\t" << up(100000000) << "\t" << down(100000000)-up(100000000) << std::endl;
    return 0;
}
