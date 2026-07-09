#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;if(n>20){
        cout<<"Invalid input";
        return 0;
    }
    multiset<int> se;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        se.insert(a);
    }
    for (int element:se){

        cout<<element;
        cout<<" ";
    }

}
