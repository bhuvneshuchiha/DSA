#include <climits>
#include <vector>
using namespace std;

int maxiProfit(vector<int> &prices) {

  int maxProfit = INT_MIN;
  int buy = prices[0];
  int profit = 0;

  for (int i = 1; i < prices.size(); i++) {
    if (buy > prices[i]) {
      buy = prices[i];
    }
    if (buy - prices[i] > profit) {
      profit = buy - prices[i];
    }
    if (profit > maxProfit) {
      maxProfit = profit;
    }
  }
  return maxProfit;
};

int main() { return 0; }
