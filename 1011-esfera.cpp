#include <iostream>
#include <math.h>
double pi = 3.14159;
using namespace std;
double r;
double v;

double volume();
double entrada();
int main()
{
    entrada();
    entrada;
    volume();

     cout << fixed;
    cout.precision(3);

    cout << "VOLUME = " << v << endl;
    return 0;
}
double volume()
{
    v = (4 / 3.0) * pi * pow(r,3);
    return v;
}
double entrada(){
    cin >> r;
}
