#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int findSum(vector<int> arr, int size) {

  int sum = INT_MIN;
  int currentSum = 0;
  for (int i = 0; i < size; i++) {
    currentSum += arr[i];
    if (currentSum > sum) {
      sum = currentSum;
    }
    if (sum < 0) {
      sum = 0;
    }
  }
  return sum;
}

int main() {

  vector<int> arr;
  arr.push_back(5);
  arr.push_back(4);
  arr.push_back(-1);
  arr.push_back(7);
  arr.push_back(8);
  int s = findSum(arr, 5);
  cout << s << endl;
  return 0;
}
