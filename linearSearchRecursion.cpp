#include <iostream>
using namespace std;


bool linearSearch(int arr[], int size, int key){

    //base case
    if (key == arr[0]) {
        return true;
    }

    if (size == 0) {
        return false;
    }

    return linearSearch(arr + 1, size - 1, key);
}

int main (int argc, char *argv[]) {

    int arr[6] = {1,2,3,4,5,6};
    int key = 22;
    int size = 6;
    bool res = linearSearch(arr, size, key);
    cout << res << endl;
    return 0;
}
