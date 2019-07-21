#include <bits/stdc++.h>
using namespace std;

string getHex(int num)
{
    switch (num)
    {
    case 0:
        return "0";
    case 1:
        return "1";
    case 10:
        return "2";
    case 11:
        return "3";
    case 100:
        return "4";
    case 101:
        return "5";
    case 110:
        return "6";
    case 111:
        return "7";
    case 1000:
        return "8";
    case 1001:
        return "9";
    case 1010:
        return "A";
    case 1011:
        return "B";
    case 1100:
        return "C";
    case 1101:
        return "D";
    case 1110:
        return "E";
    case 1111:
        return "F";
    }
}

int main(int argc, char *argv[])
{
    int octalToBinaryMap[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long unsigned num;
    cin >> num;

    long long unsigned binary = 0, place = 1;

    while (num)
    {
        long long unsigned digit = num % 10;
        binary = (octalToBinaryMap[digit] * place) + binary;
        num /= 10;
        place *= 1000;
    }

    string hex = "";

    while (binary)
    {
        hex = getHex(binary % 10000) + hex;
        binary /= 10000;
    }

    cout << hex << endl;

    return 0;
}
