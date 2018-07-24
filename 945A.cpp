#include <iostream>
using namespace std;
int main () {
int n;
cin>>n;
int arr[n];
int sum = 0;

for (int i = 0; i < n; i++){
    cin>>arr[i];
    sum += arr[i];
}

int made = 0;

if (sum%2==1){
    for (int i=0; i <n; i++){
        made += arr[i];
        if (made > sum/2) {cout<<i+1; return 0; }
    }
} else {
    for (int i=0; i <n; i++){
        made += arr[i];
        if (made >= sum/2) {cout<<i+1; return 0; }
    }
}
}
