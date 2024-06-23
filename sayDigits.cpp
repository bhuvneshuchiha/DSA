#include <iostream>
using namespace std;

void sayDigit(int n, int arr[]) {

  if (n == 0) {
    return;
  }

  int digit = n % 10;
  n = n / 10;

  sayDigit(n, arr);
  cout << arr[digit] << " ";
}

int main(int argc, char *argv[]) {

  string arr[10] = {"one", "two",   "three", "four", "five",
                    "six", "seven", "eight", "nine"};

  return 0;
}
