#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int a1[] = {1, 2, 3, 4};
    int a2[] = {1, 5, 6, 7};
    
    set<int> st;
    
    int n1 = sizeof(a1) / sizeof(a1[0]);
    int n2 = sizeof(a2) / sizeof(a2[0]);
    
    for(int i = 0; i < n1; i++) {
        st.insert(a1[i]);
    }
    
    for(int i = 0; i < n2; i++) {
        st.insert(a2[i]);
    }
    
    vector<int> ans(st.begin(), st.end());
    
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}
