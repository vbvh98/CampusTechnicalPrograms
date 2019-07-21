#include <bits/stdc++.h>
using namespace std;

int factorial(int N)
{
    if (N <= 0)
        return 1;
    return N * factorial(N - 1);
}

int main(int argc, char *argv[])
{
    int num;
    cin >> num;
    int numcopy = num;
    int factSum = 0;
    while (numcopy)
    {
        factSum += factorial(numcopy % 10);
        numcopy /= 10;
    }
    cout << (factSum == num ? "IS STRONG!" : "NOT STRONG!") << endl;
    return 0;
}
