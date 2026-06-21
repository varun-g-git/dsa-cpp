#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=5;
    int arr[n] = {2,2,1,1,3};
    int xor1=0;
    for(int i = 0; i < n; i++) {
        xor1=xor1^arr[i];
    }
    
    cout <<xor1; 
    
    return 0;
}
