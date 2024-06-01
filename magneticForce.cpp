#include <iostream>
#include <vector>
using namespace std;

bool isPossible(int m, int mid, vector<int> position) {
  int ballCount = 1;
  int force = position[0];
  for (int i = 0; i < position.size(); i++) {
    if (position[i] - force <= mid) {
      ballCount++;
      if (ballCount == m) {
        return true;
      }
    }
    force = position[i];
  }
  return false;
}

int maxDistance(vector<int> &position, int m) {
  sort(position.begin(), position.end());
  int s = 0;
  int maxi = -1;
  int ans = -1;
  for (int i = 0; i < position.size(); i++) {
    maxi = max(maxi, position[i]);
  }
  int e = maxi;
  int mid = s + (e - s) / 2;
  while (s <= e) {
    if (isPossible(m, mid, position)) {
      ans = mid;
      s = mid + 1;
    } else {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
};
