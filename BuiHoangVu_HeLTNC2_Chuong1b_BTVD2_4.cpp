#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"n = "; cin>>n;
	double z=0.0;
	for(int i=1; i<=n; i++){
		z += 1.0/(2.0*i-1.0) - 1.0/(2.0*i);
	}
	cout<<"Z = "<<z;
}
