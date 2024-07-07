using namespace std;

bool isPowerOfFour(int n){
    //base case
    if (n == 1) {
        return true;
    }

    if (n <= 0) {
        return false;
    }

    if (n % 4 != 0) {
        return false;
    }

    return isPowerOfFour(n / 4);
}

