#include <iostream>
using namespace std;

void sayDigits(string arr[], int n) {

  // base case
  if (n == 0) {
    return;
  }

  int digit = n % 10;

  n /= 10;
  sayDigits(arr, n);
  cout << arr[digit] << " ";
}

int main() {

  string arr[10] = {"zero", "one", "two",   "three", "four",
                    "five", "six", "seven", "eight", "nine"};

  int n;
  cin >> n;
  sayDigits(arr, n);
  return 0;
}
