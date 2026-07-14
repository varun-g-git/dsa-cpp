#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6]={10,22,12,3,0,6};
    vector<int>ans;
    int maxi=INT_MIN;
    for(int i=6-1;i>=0;i--){
        if(maxi<arr[i]){
            ans.push_back(arr[i]);
        }
        maxi = max(maxi,arr[i]);
    }
    for(auto i:ans){
        
    cout<<i<<" ";
    }
    
}
