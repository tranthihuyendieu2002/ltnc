#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int so1, so2;
    cin >> so1 >> so2;
    cout << (so1 + so2 + abs(so1 - so2)) / 2;
    return 0;
}
