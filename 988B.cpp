#include <iostream>
#include <algorithm>

int main (){
    int n;
    std::cin >> n;
    std::pair <int,std::string> str[n];

    for (int i=0; i<n; i++){
        std::cin >>str[i].second;
        str[i].first = str[i].second.size();
    }
    std::sort(str,str+n);

    for (int i = 1; i < n; i++){
        if (str[i].second.find(str[i-1].second) == -1){
            std::cout<<"NO"; return 0;
        }
    }

    std::cout << "YES\n";

    for (int i=0; i<n; i++){
        std::cout<<str[i].second << std::endl;
    }
}
