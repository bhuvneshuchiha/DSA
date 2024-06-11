#include <algorithm>
#include <iostream>
using namespace std;
#include <vector>

vector<vector<int>> merge(vector<vector<int>> &intervals) {

  int n = intervals.size();
  vector<vector<int>> ans;
  sort(intervals.begin(), intervals.end());

  for (int i = 0; i < n; i++) {
    // if the interval does not meet the merging condition

    if (ans.empty() || intervals[i][1] > ans.back()[1]) {
      ans.push_back(intervals[i]);
    } else {
      ans.back()[1] = max(ans.back()[1], intervals[i][1]);
    }
  }
  return ans;
}

int main() { return 0; }
