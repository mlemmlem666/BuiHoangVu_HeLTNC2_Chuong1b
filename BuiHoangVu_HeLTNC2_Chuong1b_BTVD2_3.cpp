#include <iostream>
using namespace std;

int main(){
	int n;
	double y=0.0;
	cout<<"n = ";cin>>n;
	for(int i=1; i<=n; i++){
		y += 1.0/i;
	}
	cout<<"Y = "<<y;
}
