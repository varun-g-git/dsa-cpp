#include <iostream> 
#include <algorithm> 
using namespace std; 

void displayarr(int arr[], int n) { 
    for(int i = 0; i < n; i++) { 
        cout << arr[i] << " "; 
    } 
    cout << endl; 
} 

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high]; 
        int i = low - 1; 

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) { 
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        int pi = i + 1; 

        quicksort(arr, low, pi - 1);  
        quicksort(arr, pi + 1, high); 
    }
}

int main() { 
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    cout << "Unsorted array: "; 
    displayarr(arr, n); 

    quicksort(arr, 0, n - 1); 

    cout << "Sorted array: "; 
    displayarr(arr, n); 

    return 0; 
}
