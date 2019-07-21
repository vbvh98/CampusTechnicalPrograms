#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    int a[] = {1, 2, 3, 5, 4, 6, 7, 8, 10, 9};
    int len = 10;

    int min, max;
    min = max = a[0];
    for (int i = 1; i < len; i++)
    {
        min = min > a[i] ? a[i] : min;
        max = max < a[i] ? a[i] : max;
    }

    cout << min << " " << max << endl;

    return 0;
}
