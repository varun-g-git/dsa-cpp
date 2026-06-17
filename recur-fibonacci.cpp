#include <bits/stdc++.h>

using namespace std;

int printfun(int n) {
    if (n <= 1) {
        return n;
    }
    
    return printfun(n-1)+printfun(n-2);
}

int main() {
    int n;
    cin>>n;
    cout<<printfun(n);
}
