#include <iostream>
#include <cmath>
using namespace std;

bool ktcp(int m){
	if(sqrt(m)==int(sqrt(m)))
		return true;
	return false;
}

void Insocp(int a[], int n){
	for(int i=0; i<n; i++){
		if (a[i]<=100 && a[i]>=0 && ktcp(a[i]) ){
			cout<<" "<<a[i];
		}
	}
}

int main(){
	int n;
	cout<<"Nhap n: ";cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cout<<"So thu "<<i+1<<": ";cin>>a[i];
	}
	cout<<"cac so chinh phuong trong khoang tu 1 den 100:";
	Insocp(a,n);
	
}
