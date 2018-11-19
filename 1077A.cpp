#include<iostream>
#define ll long long

int main(){
	int a;
	std::cin>>a;
	for (int i=0; i<a; i++){
		ll n,m,k;
		std::cin>>n>>m>>k;
		std::cout<<n*((k+1)/2) - m*(k/2)<<std::endl;;
	}
}