#include <vector>
using namespace std;

vector<int> repeatedNumber(const vector<int> &A) {

  vector<int> ans;
  int n = A.size();
  long long S = 0;
  long long Sn = 0;
  long long S2 = 0;
  long long S2n = 0;
  long long missing;
  long long repeated;

  // Sum of numbers and sum of squares of the numbers present
  // int the vector
  //
  for (int i = 0; i < n; i++) {
    S += A[i];
    S2 += A[i] * A[i];
  }

  // Sum of numbers from 1 to n
  Sn = n * (n + 1) / 2;
  // Diff of actual sum and sum of 1 to n
  long long val1 = S - Sn;

  // Sum of squares of numbers from 1 to n;
  S2n = (n * (n + 1) * (2 * n + 1)) / 6;
  // Diff of actual squares sum and from 1 to n sq.
  long long val2 = S2 - S2n;

  val2 = val2 / val1;
  long long x = (val1 + val2) / 2;
  long long y = x - val1;

  return {(int)x, (int)y};
}
