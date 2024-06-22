#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {

  int row;
  cin >> row;

  //HACK: Below temp is used to store individual array sizes which
  //will be used to print the arrays later on.
  vector<int>temp;

  // NOTE: Creating jagged array:-

  int **arr = new int* [row]; //This is the array pointing to array of pointers.
  for (int i = 0; i < row; i++) {
    cout << "Enter column number " << endl;
    int col;
    cin >> col;
    temp.push_back(col);
    arr[i] = new int[col]; //Each element of the arr(array of pointers) is being assinged a new array in heap.

   //NOTE: Taking input into our array:-
    cout << "Start giving inputs " << endl;
    for (int j =0; j < col; j++) {
      cin >> arr[i][j];
    }
  }

  // NOTE: Printing the jagged array using auto keyword:-

  for (int i =0; i < row; i++) {
    int col = temp[i];
    for (int j = 0; j < col; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < row; i++) {
     delete [] arr[i];
  }

  return 0;
}
