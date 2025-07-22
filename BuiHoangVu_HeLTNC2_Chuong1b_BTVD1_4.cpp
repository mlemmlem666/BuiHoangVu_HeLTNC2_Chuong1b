#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Nhap n: ";cin>>n;
	cout<<"In ra man hinh so chinh phuong tu 1 den n:";
	for (int i=1; i<=n; i++){
		if(i*i<=n){
			cout<<endl<<i*i;
		}
	}
}
