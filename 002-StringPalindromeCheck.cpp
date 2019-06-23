#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
  char* p;
  bool isPalindrome = true;

  cin.getline(p, 80);

  int n = strlen(p);

  for (int i = 0; i < n / 2; i++) {
    if (p[i] != p[n - 1 - i]) {
      isPalindrome = false;
      break;
    }
  }

  const char* result = isPalindrome ? "Palindrome.\n" : "Not Palindrome.\n";

  printf("%s\n", result);

  return 0;
}
