#include<iostream>
using namespace std;
int main()
{
    int so1, so2;
    cin >> so1 >> so2;
    if (so1 % 7 == 0 && so2 % 7 == 0) cout << "true";
    else cout << "false";
    return 0;
}
