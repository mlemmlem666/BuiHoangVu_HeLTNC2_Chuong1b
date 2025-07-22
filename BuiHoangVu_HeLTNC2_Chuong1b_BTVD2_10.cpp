#include <iostream>
#include <cmath>
using namespace std;

int  main(){
	int n=2;
	double e, s= 1.0;
	int x;
	cout<<"x = ";cin>>x;
	do{
		cout<<"e = ",cin>>e;
	}while(e>1 && e<=0);
	do{
		s += ( pow( x , (n-1) ) * pow( -1 , n ) )/n;
		n++;
	}while (1.0/n >= e);
	cout<<"S = "<<s;
}
