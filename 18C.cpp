#include <iostream>
#include <set>
using namespace std;
int n,m,k,ans,sum;
main () {
cin>>n;
int a[n];

for (int i=0; i<n; i++){
    cin>>a[i];
    sum=sum+a[i];
}
for (int i=0; i<n-1; i++){
    m=m+a[i];
    if (sum-m==m) ans++;
}

cout<<ans;
}