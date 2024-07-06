#include <iostream>
#include <vector>
using namespace std;

void solve(string str, vector<string>& ans, int index, string output,
           vector<string> mapping){

    //base case
    if (index >= str.length()) {
        ans.push_back(output);
        return;
    }

    //extract digit
    int number = str[index] - '0';
    string value = mapping[number];

    //solve for each char
    for(int i = 0; i < value.length(); i++){
        output.push_back(value[i]);
        solve(str, ans, index + 1,output, mapping);
    }
}



int main (int argc, char *argv[]) {



    return 0;
}
