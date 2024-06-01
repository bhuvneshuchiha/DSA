#include <iostream>
using namespace std;

int main() {

  int arr[4] = {0, 1, 2, 0};
  int size = 4;
  int s = 0;
  int e = size - 1;
  int mid = s + (e - s) / 2;

  while (s < e) {
    if (arr[mid] < arr[mid + 1]) {
      s = mid + 1;
    } else if (arr[mid] > arr[mid + 1]) {
      e = mid;
    }
    mid = s + (e - s) / 2;
  }
  cout << s << endl;

  return 0;
}
