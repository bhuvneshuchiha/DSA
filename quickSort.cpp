#include <iostream>
#include <utility>
using namespace std;

int partition(int arr[], int s, int e){

    int pivot = arr[s];
    int count = 0;

    for(int i = s + 1; i <= e; i++){
        if (arr[i] < pivot) {
            count++;
        }
    }

    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    //make sure the left part is less and right is greater
    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex) {

        while (arr[i] < pivot){
            i++;
        }

        while (arr[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;


}


void quickSort(int arr[], int s, int e){

    //base case
    if (s >= e) {
        return;
    }

    int pivotIndex = partition(arr, s, e);

    quickSort(arr, s, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, e);
}

int main (int argc, char *argv[]) {



    return 0;
}
