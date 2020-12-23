#include<iostream>

int main() {
    int n;
    std::cin>>n;
    int a,b;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        std::cin>> a>> b;
        ans = (b - (a % b)) == b ? 0 : b - (a % b);
        std::cout<< ans << std::endl;
    }

    return 0;
}