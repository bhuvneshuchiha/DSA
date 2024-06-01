#include<iostream>
using namespace std;

void swap_array(int array[], int size){

  for(int i = 0; i < size; i=i+2){
    int j = i + 1;
    int temp = 0;

    if(j+1 <= size){
      temp = array[i];
      array[i] = array[j];
      array[j] = temp;
    }
  
  }

  for(int i = 0; i < size; i++){
    cout << array[i] << " ";
  }
}


int main(){
  
  int size = 7;
  int abc[7] = {1,2,3,4,5,6,7}; 
  swap_array(abc, size);
  return 0;
}
