#include <iostream>
using namespace std;

int pow(int n, int power) {

  // base case
  if (power == 1) {
    return n;
  }
  if (power == 0) {
    return 1;
  }

  return n * pow(n, power - 1);
}

int main(int argc, char *argv[]) {

  int n;
  cin >> n;
  int power;
  cin >> power;

  int res = pow(n, power);
  cout << res;
  return 0;
}
