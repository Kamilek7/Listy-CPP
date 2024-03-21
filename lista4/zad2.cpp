#include <iostream>
#include <cmath>
double funkcjaA(double x)
{
    return (cos(x) - x);
}
double funkcjaB(double x)
{
    return (cos(x) - 0.5);
}
double root(double (*f)(double), double a, double b, double tolerance = 1e-10)
{
    try
    {
        if (f(a)*f(b)<0)
        {
            if (f((a+b)/2)!=0)
            {
                double x1;
                while (fabs(a-b)>tolerance)
                {
                    x1 = (a+b)/2;
                    if (f(a)*f(x1)<0)
                        b=x1;
                    else
                        a=x1;
                }
                return x1;
            }
            else
                return (a+b)/2;
        }
        else
            throw 1;
    }
    catch (int err) 
    {
        if (err==1)
            std::cout << "Podane konce przedzialow muszą miec w funkcji wartosci o przeciwnych znakach.\n";
        return 0.0;
    }
}
int main()
{
    std::cout << root(&funkcjaA, 0,2, 1e-6) << std::endl << root(&funkcjaB, 0,1.5, 1e-6);

    return 0;
}
