#include <iostream>
#include <stdlib.h>

int main(){
    int n;
    std::string str;
    std::cin>>n>>str;
    int zeros = 0, ones = 0;

    for (int i=0; i<n; i++){
        if (str[i] == '0') zeros++;
        if (str[i] == '1') ones++;
    }

    std::cout<<abs(zeros - ones);


}