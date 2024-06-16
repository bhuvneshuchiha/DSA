#include <vector>
using namespace std;

int findDuplicate(vector<int> &nums) {

  int n = nums.size();
  int ans = -1;
  /*  for (int i = 0; i < n - 1; i++) {*/
  /*    for (int j = 1; j < n; j++) {*/
  /*      if (nums[i] == nums[j]) {*/
  /*        ans = nums[i];*/
  /*      }*/
  /*    }*/
  /*  }*/
  /*  return ans;*/

  int slow = 0;
  int fast = 2;

  while (slow != fast) {
    if (fast > n - 1) {
      fast = 0;
    }
    if (nums[slow] == nums[fast]) {
      ans = nums[slow];
    } else {
      slow++;
      fast += 2;
    }
  }
  return ans;
}

int main(int argc, char *argv[]) { return 0; }
