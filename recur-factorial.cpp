#include <iostream>
using namespace std;

int printfun(int n){
    if(n<=0){
        return 1;
    }
    return n*(printfun(n-1));
}
int main()
{   int n;
    cin>>n;
    if(n<0){
        cout<<"Invalid";
    }
    cout<<printfun(n);
    return 0;
}
