#include <iostream>
#include <cmath>
using namespace std;

int  main(){
	int n=1;
	double e, s= 0.0;
	do{
		cout<<"e = ",cin>>e;
	}while(e>1 && e<=0);
	do{
		s += pow( -1 , (n-1) )/n;
		n++;
	}while (1.0/n >= e);
	cout<<"S = "<<s;
}
