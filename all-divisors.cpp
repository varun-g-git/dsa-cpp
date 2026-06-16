#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    // Loop only up to the square root
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            cout << i << " "; 
            
            if(i != n / i) {
                cout << n / i << " "; 
            }
        }
    }
    return 0;
}
