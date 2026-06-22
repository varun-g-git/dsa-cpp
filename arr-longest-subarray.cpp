
#include <iostream>
using namespace std;
int main()
{
    int n=9,maxlen=0;
    int ipsum=3;
    int sum=0;
    int arr[n]={1,2,1,1,1,3,2,1,3};
    int left=0,right=0;
    while(right<n){
        while(left<=right&&sum>ipsum){
            sum-=arr[left];
            left++;
        }
        if(sum==ipsum){
            maxlen=max(maxlen,right-left+1);
        }
            right++;
        if(right<n){
            sum+=arr[right];
        }
        
    }
    cout<<maxlen;
    return 0;
}
