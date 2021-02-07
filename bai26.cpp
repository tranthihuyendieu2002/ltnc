#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, so[1000], sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> so[i];
        sum += so[i];
    }
    sort(so, so + n);
    cout << "Mean: " << sum / n << endl << "Max: " << so[n - 1] << endl << "Min: " << so[0];
    return 0;
}
