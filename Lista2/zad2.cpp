// ZAD 2

#include <iostream>
#include <stdlib.h>
int liczby[] = { 1, 4, 7, 2, 5, 9, 2, 8 };
int sortuj(const void* a, const void* b)
{
    int temp = *(int*)a;
    int temp1 = *(int*)b;
    if (temp % 2 == temp1 % 2) 
        if (temp % 2) 
            return temp1 - temp; 
        else
            return temp - temp1;
    else 
        return temp % 2;
}
int main()
{
    for (int i=0; i<8; i++)
        std::cout << liczby[i] << " ";
    std::cout<<std::endl;
    qsort (liczby, 8, sizeof(int), sortuj);
    for (int i=0; i<8; i++)
        std::cout << liczby[i] << " ";
    return 0;
}