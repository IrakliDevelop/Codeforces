#include <iostream>
#include <algorithm>
using namespace std;
long long a1[200005],a2[200005],n,q,i,l,r,ans;
int main () {
scanf("%d%d", &n, &q);
for (i=0; i<n; i++){
scanf("%I64d",&a1[i]);
}
for (i=0; i<q; i++){
scanf("%I64d%I64d", &l, &r);
a2[l-1]++; a2[r]--;
}
for (i=0; i<n; i++){
	a2[i]=a2[i]+a2[i-1];
}
sort (a1,a1+n);
sort (a2,a2+n);

for (i=0; i<n; i++) { ans=ans+a1[i]*a2[i]; }
	cout<<ans;


}