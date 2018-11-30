#include<iostream>
#include<string>
#include <algorithm>
#include <map>
using namespace std;
int a, b, c, d, n, i, k;
map <string, int> m;
string s[100005];

int main() {
cin >> n;
for (i = 0; i < n; i++) {
 cin >> s[i];
}
for (i = 0; i<n; i++) {
 if (m[s[i]] == 0) {
 	cout << "OK" << endl;
 }
 else {
 	cout << s[i] << m[s[i]] << endl;
 }
 m[s[i]]++;
}
}