#include <bits/stdc++.h>
using namespace std;

void printPascalTriangle(int n)
{
    int cal = 1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i; ++j)
            cout << " ";
        for (int k = 0; k <= i; ++k)
        {

            if (k == 0)
                cal = 1;
            else
                cal = cal * (i - k + 1) / k;
            cout << cal << " ";
        }
        cout << endl;
    }
}

int main(int argc, char *argv[])
{
    cout << "enter no. of lines: " << flush;
    int n;
    cin >> n;
    printPascalTriangle(n);
    return 0;
}
