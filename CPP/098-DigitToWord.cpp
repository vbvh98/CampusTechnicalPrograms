#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    int number;
    cin >> number;

    string digitToWordMap[] = {"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};

    string result = "";

    while (number)
    {
        int digit = number % 10;
        result = digitToWordMap[digit] + " " + result;
        number /= 10;
    }

    cout << result << endl;

    return 0;
}
