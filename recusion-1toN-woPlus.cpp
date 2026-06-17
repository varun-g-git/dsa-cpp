#include <iostream>
using namespace std;

void printfun(int n){
    if(n<1){
        return;
    }

    printfun(n-1);
    cout<<n;
}
int main()
{   int n;
    cin>>n;
    printfun(n);
    return 0;
}
