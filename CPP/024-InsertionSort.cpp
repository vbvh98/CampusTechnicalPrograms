#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int i, j;
    int n = rand() % 10 + 1;
    int arr[n];
    for (int k = 0; k < n; ++k)
    {

        arr[k] = rand() % 10000;
        cout << arr[k] << "\t";
    }
    cout << endl;
    for (i = 1; i < n; i++)
    {
        int x = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }

    for (int k = 0; k < n; ++k)
    {

        cout << arr[k] << "\t";
    }
}