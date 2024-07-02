int sumOfArray(int *arr, int size) {

  // base case
  if (size == 0) {
    return 0;
  }
  if (size == 1) {
    return arr[0];
  }

  int remainingPart = sumOfArray(arr + 1, size - 1);
  int sum = arr[0] + remainingPart;
  return sum;
}

int main(int argc, char *argv[]) { return 0; }
