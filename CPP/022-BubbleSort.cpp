#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int list[], int size)
{
    for (int i = 0; i < size; i++)
        for (int j = 1; j < size - i; j++)
            if (list[j] < list[j - 1])
            {
                int temp = list[j];
                list[j] = list[j - 1];
                list[j - 1] = temp;
            }
}

int main()
{

    int list[] = {1, 2, 3, 5, 4, 6, 7, 8, 10, 9};
    int n = 10;
    bubbleSort(list, n);

    for (int i = 0; i < n; i++)
    {
        cout << list[i] << "\t";
    }
    cout << endl;

    return 0;
}