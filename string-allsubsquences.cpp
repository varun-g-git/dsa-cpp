#include <iostream>
#include <string>

using namespace std;

void printSubsequences(string input, string output) {
    if (input.empty()) {
        cout << (output.empty() ? "[empty]" : output) << endl;
        return;
    }

    printSubsequences(input.substr(1), output + input[0]);

    printSubsequences(input.substr(1), output);
}

int main() {
    string str;
    cin>>str;
    cout << "Subsequences of '" << str << "':" << endl;
    printSubsequences(str, ""); 
    
    return 0;
}
