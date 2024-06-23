#include <iostream>
using namespace std;

int countStr(int n) {
  if (n < 0) {
    return 0;
  }

  if (n == 0) {
    return 1;
  }

  int ans = countStr(n - 1) + countStr(n - 2);

  return ans;
}

int main(int argc, char *argv[]) { return 0; }
