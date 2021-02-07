#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a, b, c, s, dientich;
    cin >> a >> b >> c;
    s = (a + b + c) / 2;
    dientich = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << dientich;
    return 0;
}

