#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {

  // base case
  if (size == 0) {
    return 0;
  }
  if (size == 1) {
    return arr[0];
  }

  int sum = arr[0] + sumArray(arr + 1, size - 1);
  return sum;
}

int main(int argc, char *argv[]) {

  int arr[5] = {1, 2, 3, 4, 5};
  int size = 5;

  int result = sumArray(arr, size);
  cout << result << endl;

  return 0;
}
