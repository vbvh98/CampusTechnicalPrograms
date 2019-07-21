#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    int num;
    cin >> num;

    string octal = "";

    while (num)
    {
        int reminder = num % 8;
        octal = to_string(reminder) + octal;
        num /= 8;
    }

    cout << octal << endl;

    return 0;
}
