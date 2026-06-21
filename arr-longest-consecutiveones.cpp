#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=4;
    int arr[n] = {1,0,1,1};
    int count=0;
    int maxi=0;
    for(int i = 0; i < n; i++) {
        if(arr[i]==1){
            count ++;
            maxi=max(maxi,count);
        }
        else{
            count=0;
        }
    }
    
    cout <<maxi; 
    
    return 0;
}
