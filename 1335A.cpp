#include<iostream>

int main() {
    int t,n;
    std::cin>> t;
    for (int i =0; i<t; i++) {
        std::cin>> n;
        if (n <= 2) {
            std::cout << 0 << std::endl;
        } else if (n % 2 == 0) {
            std::cout <<(n / 2) - 1 << std::endl;
        } else {
            std::cout << (n - 1) / 2 << std::endl;
        }
    }

    return 0;
}