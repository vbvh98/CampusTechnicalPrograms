#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
  long long unsigned int number, rev_number = 0, l;

  scanf("%d", &number);

  // int len = to_string(number).length(), n = len - 1;

  while (number != 0) {
    l = number % 10;
    number /= 10;
    rev_number = rev_number * 10 + l;
    cout << rev_number << " " << l << " " << number << endl;
  }

  return 0;
}
