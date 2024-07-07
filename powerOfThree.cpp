using namespace std;

bool isPowerOfThree(int n){
    //base case
    if (n <= 0) {
        return false;
    }

    if (n == 1) {
        return true;
    }

    if (n % 3 != 0) {
        return false;
    }
    return isPowerOfThree(n / 3);
}



int main (int argc, char *argv[]) {



    return 0;
}
