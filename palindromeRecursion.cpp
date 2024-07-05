#include <iostream>
using namespace std;

bool palindrom(string str, int s , int e){

    //base case
    if (s >= e) {
        return true;
    }

    if (str[s] != str[e]) {
        return false;
    }

    s++;
    e--;

    return palindrom(str, s, e);

}



int main (int argc, char *argv[]) {

    string s = "bookoobee";
    bool res = palindrom(s, 0, s.length()-1);
    cout << res << endl;
    return 0;
}
