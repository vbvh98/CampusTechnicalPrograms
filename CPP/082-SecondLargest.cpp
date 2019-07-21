#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    int a[] = {1, 2, 3, 5, 4, 6, 7, 8, 10, 9};
    int len = 10;

    int max, smax;
    max = smax = a[0];
    for (int i = 1; i < len; i++)
    {
        if (max < a[i])
        {
            smax = max;
            max = a[i];
        }
        else if (smax < a[i])
        {
            smax = a[i];
        }
    }

    cout << smax << endl;

    return 0;
}
