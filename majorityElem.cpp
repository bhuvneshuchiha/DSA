#include <vector>
using namespace std;

int majorityElement(vector<int> &nums) {

  int count = 0;
  int element = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (count == 0) {
      element = nums[i];
    } else if (nums[i] == element) {
      count++;
    } else {
      count--;
    }
  }
  return element;
}
