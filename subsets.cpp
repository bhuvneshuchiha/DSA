#include <vector>
using namespace std;

void solve(vector<int> nums, vector<vector <int>>& ans, vector<int> output,
           int index){

    //base case
    if (index >= nums.size()) {
        ans.push_back(output);
        return;
    }

    //exclude

    solve(nums, ans, output, index + 1);

    //include

    int elem = nums[index];
    output.push_back(elem);
    solve(nums, ans, output, index + 1);
}
