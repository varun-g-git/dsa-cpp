#include <iostream>
#include <vector>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    int j = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }

    if (j == -1)
        return a;

    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }

    return a;
}

int main() {
    vector<int> a = {1, 0, 2, 3, 0, 4, 0, 1};
    vector<int> ans = moveZeros(a.size(), a);

    for (int x : ans)
        cout << x << " ";

    return 0;
}
