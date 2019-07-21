#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    int num;
    cin >> num;
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        sum += num % i == 0 ? i : 0;
    }
    cout << (sum == num ? "IS PERFECT NUMBER!" : "NOT a Perfect number!") << endl;
    return 0;
}
