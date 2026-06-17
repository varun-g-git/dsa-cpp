#include <bits/stdc++.h>
using namespace std;

bool isPalindromeRecursive(const string &str, int left, int right) {
    if (left >= right) {
        return true;
    }
    
    if (str[left] != str[right]) {
        return false;
    }
    
    return isPalindromeRecursive(str, left + 1, right - 1);
}

int main() {
    string str;
    cin >> str;
    
    if (isPalindromeRecursive(str, 0, str.length() - 1)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
