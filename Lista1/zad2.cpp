// ZAD 2

#include <iostream>
#include <cmath>
double archimedes(int n)
{
    if (n == 0)
    {
        return (1.0/std::sqrt(3.0));
    }
    else
    {
        double temp = archimedes(n - 1);
        return (std::sqrt(temp * temp + 1.0) - 1.0) / temp;
    }
}
double archimedesAlt(int n)
{
    if (n == 0)
    {
        return (1.0/std::sqrt(3.0));
    }
    else
    {
        double temp = archimedesAlt(n - 1);
        return temp/(std::sqrt(temp * temp + 1.0) + 1.0);
    }
}
int main()
{
    std::cout.precision(12);
    std::cout << "n        \tWzor a      " << "\t" << "Wzor b\n\n";
    for (int i = 0; i <= 30; i++)
        std::cout << i << "\t" << 6.0 * pow(2.0, i) * archimedes(i) << "\t" << 6.0 * pow(2.0, i) * archimedesAlt(i) << std::endl;
    return 0;
}
