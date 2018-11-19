//problem 540A --- Combination Lock
#include<iostream>
#include <algorithm>

int main(void){
    int n;
    std::cin>>n;
    std::string str1, str2;

    int current[n];
    int code[n];
    int ans = 0;

    std::cin>>str1>>str2;

    for (int i=0; i<n; i++){
        current[i] = str1[i];
        code[i] = str2[i];
    }


    for (int i = 0; i < n; i++){
        int mn = std::min(current[i], code[i]);
        int mx = std::max(current[i],code[i]);
        int var1 = mx - mn;
        int var2 =9 - mx + 1 + mn;
        ans += std::min(var1,var2);
    }

    std::cout<<ans;



}