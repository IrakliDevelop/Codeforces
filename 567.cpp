#include <iostream>
#include <map>
using namespace std;
long long n,k,x,ans;
map <long long,long long> m1,m2;
main() {
cin>>n>>k;
for (int i=0; i<n; i++){
    cin>>x;
    if (x%k==0) {
        ans+=m2[x/k];
        m2[x]+=m1[x/k];
    }
    m1[x]++;
}
cout<<ans;

}