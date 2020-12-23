#include<iostream>

int main() {
    int t;
    int n;
    int tracker;
    int numberCount;
    int copy;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::cin >> n;
        numberCount = 0;
        tracker = 1;
        copy = n;
        while (copy > 0) {
            if (copy % 10 > 0) {
                numberCount++;
            }
            copy = copy / 10;
        }
        std::cout << numberCount << '\n';
        while (n > 0) {
            if (n % 10 > 0) {
                std::cout<< (n%10) * tracker << " ";
            }
            n = n / 10;
            tracker = tracker * 10;
        }
        std::cout << '\n';
    }
    return 0;
}