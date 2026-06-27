#include <iostream> 
#include <algorithm> 
using namespace std; 

void displayarr(int arr[], int n) { 
    for(int i = 0; i < n; i++) { 
        cout << arr[i] << " "; 
    } 
    cout << endl; 
} 

void selectionsort(int arr[], int n) { 
    for(int i=0;i<n;i++){ 
        int j=i; 
        while(j>0&&arr[j]<arr[j-1]){ 
            swap(arr[j],arr[j-1]); 
            j--; 
        } 
    } 
} 

int main() { 
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    cout << "Unsorted array: "; 
    displayarr(arr, n); 

    selectionsort(arr, n); 

    cout << "Sorted array: "; 
    displayarr(arr, n); 

    return 0; 
}
