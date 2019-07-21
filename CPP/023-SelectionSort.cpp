#include <iostream>
#include <stdlib.h>

using std::cout;
using std::endl;

void SelectionSort(int list[], int size)
{

    for (int i = 0; i < size; i++)
    {

        int min = i;
        int j = i + 1;
        for (; j < size; j++)
        {

            if (list[min] > list[j])
            {

                min = j;
            }
        }

        int temp = list[i];
        list[i] = list[min];
        list[min] = temp;
    }
}

int main()
{

    srand(time(NULL));
    int n = rand() % 10 + 1;
    int list[n];
    int i = 0;
    cout << "size = " << n << endl;
    while (i < n)
    {

        list[i] = rand() % 1000;
        cout << list[i] << "\t";
        i++;
    }

    cout << endl;
    SelectionSort(list, n);

    i = 0;
    while (i < n)
    {

        cout << list[i] << "\t";
        i++;
    }

    return 0;
}
