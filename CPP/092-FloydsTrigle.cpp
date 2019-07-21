#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    int n = 10, k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << k++ << "\t";
        }
        cout << endl;
    }
    return 0;
}
