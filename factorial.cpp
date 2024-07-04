#include <iostream>
using namespace std;

int factorial(int num) {

  // base case
  if (num == 1 || num == 0) {
    return 1;
  }

  return num * factorial(num - 1);
}

int main(int argc, char *argv[]) {

  int num;
  cin >> num;

  int result = factorial(num);
  cout << result << endl;
  return 0;
}
