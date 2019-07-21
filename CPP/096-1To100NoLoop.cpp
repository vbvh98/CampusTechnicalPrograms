#include <bits/stdc++.h>
using namespace std;

int n = 1;
int main()
{
    if (n > 100)
        return 0;
    cout << n << endl;
    n++;
    main();
    return 0;
}
