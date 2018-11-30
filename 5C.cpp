#include <iostream>
#include <algorithm>
#include <stack>
#define ll long long

std::stack <int> st;

ll mx,ans ,arr[1000001];


int main () {
    std::string s;
    std::cin>>s;
    ll sz = s.size();

    for (int i=0; i<sz; i++){
        if (s[i]=='('){
                st.push(i);
        } else if (!st.empty()){
            arr[i]=1;
            arr[st.top()]=1;
            st.pop();
        }
    }

    for(int i=sz-1;i>=0;i--){
        if(arr[i]==1){
            arr[i]+=arr[i+1];
        }
        if(s[i]=='('){
            if(arr[i]>mx){
                mx=arr[i];ans=1;
            }
            else if(arr[i]==mx) {
                    ans++;
            }
        }
    }

    if(mx==0) {
        std::cout<<0<<" "<<1;
    }
    else {
        std::cout<<mx<<" "<<ans;
    }


}