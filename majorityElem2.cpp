#include <algorithm>
#include <vector>
using namespace std;

vector<int> majorityElement(vector<int> &nums) {

  int count1 = 0;
  int count2 = 0;
  int elem1 = INT_MIN;
  int elem2 = INT_MIN;

  for (int i = 0; i < nums.size(); i++) {
    if (count1 == 0 && nums[i] != elem2) {
      count1 = 1;
      elem1 = nums[i];
    } else if (count2 == 0 && nums[i] != elem1) {
      count2 = 1;
      elem2 = nums[i];
    } else if (elem1 == nums[i]) {
      count1++;
    } else if (elem2 == nums[i]) {
      count2++;
    } else {
      count1--;
      count2--;
    }
  }
  count1 = 0, count2 = 0;
  vector<int> ans;
  for (int i = 0; i < nums.size(); i++) {
    if (elem1 == nums[i]) {
      count1++;
    } else if (elem2 == nums[i]) {
      count2++;
    }
  }
  int mini = int(nums.size() / 3) + 1;

  if (count1 >= mini) {
    ans.push_back(elem1);
  }
  if (count2 >= mini) {
    ans.push_back(elem2);
  }
  sort(ans.begin(), ans.end());
  return ans;
}
