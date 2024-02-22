// ZAD 1

// #include <iostream>
// #include <cmath>
// double pierwsze(int x)
// {
//     return pow(-1,x+1)/(2*x-1);
// }
// double drugie(int x)
// {
//     return 4*pow(x,2)/(4*pow(x,2)-1);
// }
// double trzecie(int x)
// {
//     return 1/pow(2*x-1,2);
// }
// double sum(int start, int n, double (*func)(int))
// {
//     double suma = 0;
//     for (int i = start; i<=n;i++)
//         suma += func(i);
//     return suma;
// }
// double product(int start, int n, double (*func)(int))
// {
//     double suma = 1;
//     for (int i = start; i<=n;i++)
//         suma *= func(i);
//     return suma;
// }
// int main()
// {
//     std::cout<<4*sum(1,1000000, &pierwsze)<< std::endl <<2*product(1,1000000, &drugie) << std::endl <<pow(8*sum(1,1000000, &trzecie),0.5);
//     return 0;
// }

// ZAD 2

// #include <iostream>
// #include <cmath>
// double archimedes(int n)
// {
//     if (n == 0)
//     {
//         return (1/pow(3,0.5));
//     }
//     else
//     {
//         double temp = archimedes(n-1);
//         return (pow(temp*temp+1,0.5)-1)/temp;
//     }
// }
// double archimedesAlt(int n)
// {
//     if (n == 0)
//     {
//         return (1/pow(3,0.5));
//     }
//     else
//     {
//         double temp = archimedes(n-1);
//         return temp/(pow(temp*temp+1,0.5)+1);
//     }
// }
// int main()
// {
//     std::cout << "Wzor a" << "\t" << "Wzor b" << std::endl << std::endl;
//     for (int i=0; i<=30; i++)
//         std::cout << 6* pow(2,i) * archimedes(i) << "\t" << 6* pow(2,i) * archimedesAlt(i) << std::endl;
//     return 0;
// }

// ZAD 3 (wersja double)

// #include <iostream>
// #include <cmath>
// double down(int n)
// {
//     double suma = 0;
//     for (int i = 1; i<=n; i++)
//         suma += (double)1/i;
//     return suma;
// }
// double up(int n)
// {
//     double suma = 0;
//     for (int i = n; i>=1;i--)
//         suma += (double)1/i;
//     return suma;
// }
// int main()
// {
//     std::cout << "Down" << "\t" << "Up" << "\t" << "Down - Up" << std::endl;
//     std::cout << down(100) << "\t" << up(100) << "\t" << down(100)-up(100) << std::endl;
//     std::cout << down(100000) << "\t" << up(100000) << "\t" << down(100000)-up(100000) << std::endl;
//     std::cout << down(100000000) << "\t" << up(100000000) << "\t" << down(100000000)-up(100000000) << std::endl;
//     return 0;
// }

// ZAD 3 (wersja float)

// #include <iostream>
// #include <cmath>
// float down(int n)
// {
//     float suma = 0;
//     for (int i = 1; i<=n; i++)
//         suma += (float)1/i;
//     return suma;
// }
// float up(int n)
// {
//     float suma = 0;
//     for (int i = n; i>=1;i--)
//         suma += (float)1/i;
//     return suma;
// }
// int main()
// {
//     std::cout << "Down" << "\t" << "Up" << "\t" << "Down - Up" << std::endl;
//     std::cout << down(100) << "\t" << up(100) << "\t" << down(100)-up(100) << std::endl;
//     std::cout << down(100000) << "\t" << up(100000) << "\t" << down(100000)-up(100000) << std::endl;
//     std::cout << down(100000000) << "\t" << up(100000000) << "\t" << down(100000000)-up(100000000) << std::endl;
//     return 0;
// }