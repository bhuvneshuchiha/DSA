#include <iostream>
using namespace std;

int fibonacci(int n) {

  if (n == 1) {
    return 1;
  }

  if (n == 0) {
    return 0;
  }

  int ans = fibonacci(n - 1) + (n - 2);

  return ans;
}

int main(int argc, char *argv[]) { return 0; }
