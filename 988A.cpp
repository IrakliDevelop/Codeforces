#include <iostream>
#include <set>

int main (void) {
    int n,k;
    std::cin >> n >> k;

    int temp[n],ans[k];
    std::set <int> st;

    int length = st.size();
    int j = 0;

    for (int i=0; i<n; i++){
        std::cin >> temp[i];
        st.insert(temp[i]);
        if (j < k){
            if (length < st.size()){
                ans[j] = i+1;
                j++;
                length = st.size();
            }
        }
    }

    if (j < k) {
        std::cout << "NO";
    } else {
        std::cout << "YES\n";
        for (int i=0; i<k; i++){
            std::cout << ans[i] << " ";
        }
    }
}
