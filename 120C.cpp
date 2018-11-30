#include <iostream>
#include <cstdio>
using namespace std;
int n,k,pig,a;
main () {
freopen ("input.txt","r",stdin);
freopen ("output.txt", "w", stdout);
cin>>n>>k;
int arr[n];
for (int i=0; i<n; i++){
    cin>>arr[i];
}
for (int i=0; i<n; i++){
    a=0;
    while (arr[i]>=k){
        arr[i]=arr[i]-k;
        a++;
        if (a==3) break;
    }
    pig=pig+arr[i];
}

cout<<pig;

}