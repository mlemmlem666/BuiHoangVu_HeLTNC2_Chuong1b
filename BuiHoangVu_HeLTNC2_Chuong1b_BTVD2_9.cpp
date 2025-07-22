#include <iostream>
#include <cmath>
using namespace std;

int  main(){
	int n=1;
	double e, s= 0.0;
	int l=1;
	int x;
	cout<<"x = ";cin>>x;
	do{
		cout<<"e = ",cin>>e;
	}while(e>1 && e<=0);
	do{
		s += pow( x , (n-1) )/l;
		n++;
		l*=n;
	}while (1.0/n >= e);
	cout<<"S = "<<s;
}
