#include <iostream>
using namespace std;

void printfun(int n,string s){
    if(n<=0){
        return;
    }
    cout<<s;
    n--;
    printfun(n,s);
}
int main()
{   int n;
    cin>>n;
    string s;
    cin>>s;
    printfun(n,s);
    return 0;
}
