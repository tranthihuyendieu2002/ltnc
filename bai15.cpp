#include<iostream>
using namespace std;
int main()
{
    string f1, f2, f;
    f1 = 'a'; f2 = 'b';
    cout << f1 << endl << f2 << endl;
    for(int i = 0; i < 8; i++)
    {
        f = f2 + f1;
        f1 = f2;
        f2 = f;
        cout << f << endl;
    }
    return 0;
}
