#include<iostream>
#include <utility>
using namespace std;

int main(){

int arr[13] = {1,1,2,1,0,1,0,2,1,0,1,2,0};
int n = 13;
int i = 0;
int j = 0;
int k = n-1;

while (j <= k) {
    if (arr[j] == 0) {
        swap(arr[i], arr[j]);
        i++;
        j++;
    } else if (arr[j] == 2) {
        swap(arr[j], arr[k]);
        k--;
    } else {
        j++;
    }
}

for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}

return 0;
}
