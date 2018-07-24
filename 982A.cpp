#include <iostream>
#include <algorithm>

int main () {
int n;
std::cin>>n;
std::string str;
std::cin>>str;
str = "0" + str + "0";

if (str.find("11")==-1 && str.find("000")==-1){
    std::cout<<"YES";
} else {
    std::cout<<"NO";
}
}
