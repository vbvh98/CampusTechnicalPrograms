#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Enter a, b, c (for ax^2 + bx + c): ";
    int a, b, c;
    cin >> a >> b >> c;

    int d = b * b - 4 * a * c;

    if (d < 0)
    {
        cout << "Roots are complex number." << endl;

        printf("Roots of quadratic equation are: ");
        printf("%.3f%+.3fi", -b / (2 * a), sqrt(-d) / (2 * a));
        printf(", %.3f%+.3fi", -b / (2 * a), -sqrt(-d) / (2 * a));

        return 0;
    }
    else if (d == 0)
    {
        cout << "Both roots are equal." << endl;
        printf("Root of quadratic equation is: %.3f ", -b / (2 * a));
    }
    else
    {
        cout << "Roots are real numbers." << endl;
        printf("Roots of quadratic equation are: %.3f , %.3f\n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
    }

    return 0;
}
