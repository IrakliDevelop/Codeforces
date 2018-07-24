#include <iostream>
#include <algorithm>

int n;

int main () {
std::cin>>n;
int arr[n];

for (int i=0; i<n; i++){
    std::cin>>arr[i];
}

std::sort(arr,arr+n);

if (n%2==0){
    std::cout<<arr[n/2-1];
} else {
    std::cout<<arr[n/2];
}

}
