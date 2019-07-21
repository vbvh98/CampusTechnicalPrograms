#include <bits/stdc++.h>
using namespace std;

int countDigits(int N)
{
    int count = 0;
    while (N)
    {
        count += 1;
        N /= 10;
    }
    return count;
}

bool isArmStrong(int num)
{
    int exp = countDigits(num);
    int numcopy = num;

    int sumOfPower = 0;
    while (numcopy)
    {
        int digit = numcopy % 10;
        sumOfPower += pow(digit, exp);
        numcopy /= 10;
    }

    return (num == sumOfPower);
}

int main(int argc, char *argv[])
{
    int number;
    cin >> number;

    cout << (isArmStrong(number) ? "is Armstrong!" : "Not Armstrong!") << endl;

    return 0;
}
