#include <iostream>
using namespace std;

void printCount(int n) {

  // base case
  if (n == 0) {
    return;
  }

  cout << n << " ";
  return printCount(n - 1);
}

int main(int argc, char *argv[]) {

  int n;
  cin >> n;
  printCount(n);

  return 0;
}
