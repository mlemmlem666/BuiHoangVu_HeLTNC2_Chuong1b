#include <iostream>
using namespace std;

int main(){
	int n;
	do{
	cout<<"n = ";cin>>n;
	}while(n<=1);
	cout<<"So nguyen to tu 1 den n:";
	for(int i=2; i<=n; i++ ){
		bool tf = true;
			for(int j = 2; j<i/2; j++){
				if(i%j==0){
					tf = false;
					break;
				}
			}
		if(tf){
			cout<<" "<<i;
		}
	}
}
