// ZAD 3 (wersja float)

#include <iostream>
#include <cmath>
    float down(int n)
{
    float suma = 0;
    for (int i = 1; i <= n; i++)
        suma += 1.0f/float(i);
    return suma;
}

float up(int n)
{
    float suma = 0;
    for (int i = n; i >= 1; i--)
        suma += 1.0f/float(i);
    return suma;
}
int main()
{
    std::cout << "Down" << "\tUp\tDown - Up\n";
    std::cout << down(100) << "\t" << up(100) << "\t" << down(100)-up(100) << std::endl;
    std::cout << down(100000) << "\t" << up(100000) << "\t" << down(100000) - up(100000) << std::endl;
    std::cout << down(100000000) << "\t" << up(100000000) << "\t" << down(100000000) - up(100000000) << std::endl;
    return EXIT_SUCCESS;
}
