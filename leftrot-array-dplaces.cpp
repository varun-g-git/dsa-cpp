/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
void leftrot(int arr[],int n,int d){
    d=d%n;//if d>n , then eg n=5 d=7 , then d=2 will also be same anwer(if d=n, then after full rotation same answers)
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i = d;i<n;i++){
        arr[i-d]=arr[i];
    }//move elvements after d to first
    for(int i = n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }//move the elements from temp to last
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    leftrot(arr,n,d);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
