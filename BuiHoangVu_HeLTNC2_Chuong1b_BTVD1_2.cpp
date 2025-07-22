#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Nhap n: ";cin>>n;
	cout<<"In ra man hinh so chan nho hon n:";
	for (int i=1; i<n; i++){
		if(i%2==0){
			cout<<" "<<i;
		}
	}
}
