#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 24; i++)
    {
        if (i == 0) cout << "12 midnght" << endl;
        else if (i < 12) cout << i << "am" << endl;
        else if (i == 12) cout << i << "noon" << endl;
        else cout << i - 12 << "pm" << endl;
    }
    return 0;
}
