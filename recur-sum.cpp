#include <iostream>
using namespace std;

int printfun(int n,int sum){
    if(n<1){
        return sum;
    }
    return(printfun(n-1,sum+n));
}
int main()
{   int n;
    cin>>n;
    cout<<printfun(n,0);
    return 0;
}
