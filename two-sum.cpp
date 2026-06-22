#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int target =10;
    int left=0,right=n-1;
    vector <int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    //ip
        int sum=0;
    sort(arr.begin(),arr.end());
    while(left<right){
        sum=arr[left]+arr[right];
        if(sum>target){
            right--;
        }
        else if(sum<target){
            left++;
        }
        else{
            cout<<arr[left]<<arr[right];
            return 0;
        }
    }
}
