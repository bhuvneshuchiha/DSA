#include <vector>
using namespace std;

void solve(string str, vector<string>& ans, string output,
           int index){

    //base case
    if (index >= str.length()) {
        if (output.length() > 0) {
            ans.push_back(output);
        }
        return;
    }

    //exclude
    solve(str,  ans,  output, index + 1);

    //include
    char ch = str[index];
    output.push_back(ch);
    solve(str, ans,  output, index + 1);
    output.pop_back();



}




int main (int argc, char *argv[]) {



    return 0;
}
