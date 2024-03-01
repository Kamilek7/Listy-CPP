// Kamil Jarocki

// ZAD 1

#include <iostream>

int sumaA(const int tab[], unsigned size)
{
    int suma = 0;
    for (int i = 0; i < size; i++)
        suma += tab[i];
    return suma;
}

void sumaB(const int tab[], unsigned size, int* result)
{
    int suma = 0;
    for (int i = 0; i < size; i++)
        suma += tab[i];
    *result = suma;
}

void pisz(const int* tab, size_t size, std::ostream *out)
{
    int suma = 0;
    for (int i = 0; i < size; i++)
        suma += tab[i];
    *out << suma;
}

void iota(int tab[], unsigned size)
{
    for (int i = 0; i < size; i++)
        tab[i] = 0;
}

void reverse(int* tab, size_t size)
{
    int temp = 0;
    for (int i = 0; i < (size / 2); i++)
    {
        temp = *(tab + i);
        *(tab + i) = *(tab + size - 1 - i);
        *(tab + size - 1 - i) = temp;
    }
}

int dot_product(const int* tab1, const int* tab2, size_t size)
{
    int suma = 0;
    for (int i=0; i<size; i++)
    {
        suma += tab1[i] * tab2[i];
    }
    return suma;

}
int main()
{
    int lista[5] = {1, 2, 3, 4, 5};
    int lista2[5] = {1, 2, 3, 4, 5};
    // A
    std::cout << sumaA(lista, 3) << std::endl;
    // B
    int result = 0;
    sumaB(lista, 3, &result);
    std::cout<<result << std::endl;
    // C
    pisz(lista, 3, &std::cout);
    std::cout << std::endl;
    // E
    reverse(lista, 3);
    for (int i = 0; i < 5; i++)
        std::cout << lista[i] << '\t';
    // D
    std::cout << std::endl;
    iota(lista,2);
    for (int i = 0; i < 5; i++)
        std::cout << lista[i] << '\t';
    std::cout << std::endl;
    // F
    std::cout << dot_product(lista, lista2, 5) << std::endl;
    return 0;
}
