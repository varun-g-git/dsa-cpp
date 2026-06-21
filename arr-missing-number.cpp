#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[4] = {1, 3, 4, 5}; //N=4
    int xor1 = 0, xor2 = 0;
    
    for(int i = 0; i < 3; i++) { //3->N-1
        xor2 = xor2 ^ arr[i]; 
        xor1 = xor1 ^ (i + 1);
    }
    
    xor1 = xor1 ^ 4;//N=4
    cout << (xor1 ^ xor2); 
    
    return 0;
}
