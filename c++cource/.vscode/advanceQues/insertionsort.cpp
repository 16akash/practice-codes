#include <iostream>
using namespace std;
// INSERTION SORT


int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 1; i < n; i++)
    {
        int current = 0;
        current = array[i];
        int j = i - 1;
        while (array[j] > array[i] && j >= 0)
        {
            array[j+1]=array[j];
            j--;

        }
        array[j+1]=current;
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";

    }
    cout<<endl;
    

    return 0;
}