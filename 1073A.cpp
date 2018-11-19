#include <iostream>

int main(){

    int n;
    std::string s;

    std::cin>>n>>s;

    for (int i=0; i<n-1; i++){
        if (s[i]!=s[i+1]){
            std::cout<<"YES\n"<<s[i]<<s[i+1];
            return 0;
        }
    }

    std::cout<<"NO";
    return 0;
}