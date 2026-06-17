#include <iostream>
using namespace std;

void printfun(int n,int i){
    if(i==n){
        return;
    }
    cout<<n;
    i++;
    printfun(n,i);
}
int main()
{   int n;
    cin>>n;
    printfun(n,0);
    return 0;
}
