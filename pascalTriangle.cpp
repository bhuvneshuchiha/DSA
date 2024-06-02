#include <iostream>
using namespace std;
#include <vector>

vector<int> createRows(int rowNum) {

  long long ans = 1;
  vector<int> ansRow;
  ansRow.push_back(1);

  for (int col = 0; col < rowNum; col++) {
    ans = ans * (rowNum - col);
    ans = ans / col;
    ansRow.push_back(ans);
  }
  return ansRow;
}

vector<vector<int>> generate(int numRows) {

  vector<vector<int>> ans;
  for (int i = 1; i <= numRows; i++) {
    ans.push_back(createRows(i));
  }
  return ans;
}
