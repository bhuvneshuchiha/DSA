#include <iostream>
#include <utility>
using namespace std;

void reverseString(int i, int j, string &str) {

  // Base case:
  if (i > j) {
    return;
  }

  swap(str[i], str[j]);
  i++;
  j--;

  // Recursive call
  reverseString(i, j, str);
}

int main(int argc, char *argv[]) {

  string name = "babb";
  cout << endl;
  reverseString(0, name.length() - 1, name);
  cout << endl;
  cout << name << endl;

  return 0;
}
