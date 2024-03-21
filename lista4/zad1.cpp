#include <iostream>
#include <vector>
using namespace std;
double operator+(const vector<double> &v1, const vector<double> &v2)
{
    double suma = 0;
    for (int i=0;i<v1.size();i++)
        suma+=(v1[i]*v2[i]);
    return suma;
}
int main()
{
    vector<double> pierwszy = {1.0,3.0,4.0};
    vector<double> drugi = {0.0,4.0,1.0};
    cout << pierwszy+drugi;
    return 0;
}
