#include <iostream>

int arr[100];

int main(){
    
    int n;
    std::cin>>n;
    
    
    int x,y;
    
    std::cin>>x>>y;
    
    int a,b;
    
    for (int i=0; i<n-1; i++){
        std::cin>>a>>b;
        for (int j=a; j<b; j++){
            arr[j]++;
        }
    }
    
    int ans = 0;
    
    for (int i = x; i<y; i++){
        if (arr[i] == 0) ans++;
    }
    
    std::cout<<ans;

    return 0;
}