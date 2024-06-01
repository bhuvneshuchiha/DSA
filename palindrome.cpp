#include <iostream>
using namespace std;

bool checkPalindrome(char arr[], int n) {
  int s = 0;
  int e = n - 1;

  while (s <= e) {
    if (arr[s++] != arr[e--]) {
      return false;
    }
  }
  return true;
}

int main() {

  char arr[3];
  cin >> arr;
  bool check = checkPalindrome(arr, 3);
  cout << check << endl;

  return 0;
}
