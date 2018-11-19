#include <iostream>
#include <queue>
#include <map>

std::queue <int> q;
std::map <int,int> mp;
int main(){

    int n;
    int x;

    std::cin>>n;

    int order[n];

    for (int i=0; i<n; i++){
        std::cin>>x;
        mp[x]++;
        q.push(x);
    }
    for (int i=0; i<n; i++){
        std::cin>>x;
        order[i]=x;
    }

    int cnt = 0;

    for (int i=0; i<n; i++){
        if (mp[order[i]]==0){
            std::cout<<0<<" ";
        } else {
            while(q.front()!=order[i]){
                mp[q.front()] = 0;
                q.pop();
                cnt++;
            }
            q.pop();
            std::cout<<++cnt<<" ";
            cnt = 0;
        }
    }

    return 0;
}