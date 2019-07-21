#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    int m = 2, n = 5;
    int a[m][n] = {{1, 2, 3, 5, 4}, {6, 7, 8, 10, 9}};

    int min, max;
    min = max = a[0][0];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            min = min > a[i][j] ? a[i][j] : min;
            max = max < a[i][j] ? a[i][j] : max;
        }

    cout << min << " " << max << endl;

    return 0;
}
