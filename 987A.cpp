#include <iostream>
#include <algorithm>

//Thanos rules
std::string gems[6][2] = {{"purple","Power"}, {"green","Time"}, {"blue", "Space"}, {"orange","Soul"}, {"red","Reality"}, {"yellow", "Mind"}};
std::pair < bool,std::pair<std::string,std::string> > gauntlet [6];

int main (){
    for (int i = 0; i < 6; i++){
        gauntlet[i].second.first = gems[i][0];
        gauntlet[i].second.second = gems[i][1];
    }

    int n;
    std::cin >> n;

    //exception
    if (n == 0){
        std::cout << 6 << std::endl;
        for (int i = 0; i < 6; i++){
        std::cout << gauntlet[i].second.second << std::endl;
        }
        return 0;
    }





    std::string str;
    for (int i = 0; i < n; i++){
        std::cin >> str;
        for (int j = 0; j < 6; j++){
        if (str ==  gauntlet[j].second.first){
            gauntlet[j].first = true;
            }
        }
    }

    int ans = 6-n;
    std::cout << ans << std::endl;
    for (int i = 0; i < 6; i++){
        if (!gauntlet[i].first){
            std::cout << gauntlet[i].second.second << std::endl;
        }
    }
}
/*SPOILERS!!!
...
...
...
...
Star-Lord dies in Avengers: Infinity War*/
