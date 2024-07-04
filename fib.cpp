#include <iostream>
using namespace std;

int fibonacci(int n) {

  // base case
  if (n == 1) {
    return 1;
  }
  if (n == 0) {
    return 0;
  }

  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char *argv[]) {

  int n;
  cin >> n;

  int result = fibonacci(n);
  cout << result;
  return 0;
}
