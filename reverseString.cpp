#include <iostream>
#include <utility>
using namespace std;

void reverseString(string &str,int s, int e){

    //base case
    if (s >= e) {
        return;
    }
    swap(str[s], str[e]);
    s++;
    e--;

    reverseString(str, s, e);
}



int main (int argc, char *argv[]) {

    string s = "abcdefghigk";
    reverseString(s, 0, s.length() - 1);
    cout << s << endl;
    return 0;
}
