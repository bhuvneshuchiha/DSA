#include <iostream>
#include <utility>
using namespace std;

void bubbleSort(int arr[], int size){

    //base case
    if (size == 0) {
        return;
    }

    for(int i = 0; i < size - 1; i++){
        if (arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }

    bubbleSort(arr + 1, size - 1);
}


int main (int argc, char *argv[]) {

    int arr[4] = {3,1,4,2};
    bubbleSort(arr, 4);
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
