#include <iostream>
using namespace std;

int main() {

  int arr[6] = {1, 2, 3, 9, 7, 5};

  int size = 6;
  int key = 7;
  int s = 0;
  int e = size - 1;
  int mid = s + (e - s) / 2;

  while (s <= e) {
    if (arr[mid] == key) {
      cout << mid;
      return mid;
    }
    if (arr[mid] < key) {
      s = mid + 1;
    }
    if (arr[mid] > key) {
      e = mid;
    }
    mid = s + (e - s) / 2;
  }

  return 0;
}
