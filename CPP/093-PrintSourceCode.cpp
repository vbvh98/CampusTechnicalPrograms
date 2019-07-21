#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    FILE *f = fopen("093-PrintSourceCode.cpp", "r");
    while (!feof(f))
    {
        cout << (char)fgetc(f);
    }
    fclose(f);
    cout << endl;
    return 0;
}
