#include <iostream>
using namespace std;
// sum of all subarray

int main()
{
    int n;

    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int current = 0;
    for (int i = 0; i < n; i++)
    {
        current = 0;
        for (int j = i; j < n; j++)
        {
            current = current + a[j];
            cout << current << endl;
        }
        // cout<<endl;
    }
    return 0;
}