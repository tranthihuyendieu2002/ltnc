#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int so[5];
    for (int i = 0; i < 5; i++)
        cin >> so[i];
    sort(so, so + 5);
    cout << so[2];
    return 0;
}
