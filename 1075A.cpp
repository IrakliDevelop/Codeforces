#include <iostream>
#define ll long long

int main (void){
    ll n,x,y;
    std::cin>>n>>x>>y;
    
    if(x+y > n+1){
        std::cout<<"Black";
    } else {
        std::cout<<"White";
    }
}