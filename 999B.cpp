#include <iostream>
#include <algorithm>

int main (void){
    int n;
    std::cin>>n;
    std::string s;
    std::cin>>s;


    for (int i=1; i<=n; i++){
        if (n % i == 0){
            for (int j = 0; j < i/2; j++){
                std::swap(s[j],s[i-j-1]);
            }
        }
    }

    std::cout<<s;

}
