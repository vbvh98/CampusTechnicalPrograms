#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    int a[] = {1, 2, 3, 5, 4, 6, 7, 8, 10, 9};
    int len = 10;

    int max;
    max = a[0];
    for (int i = 1; i < len; i++)
    {
        max = max < a[i] ? a[i] : max;
    }

    cout << max << endl;

    return 0;
}
