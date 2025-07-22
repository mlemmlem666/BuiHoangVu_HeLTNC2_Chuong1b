#include <iostream>
using namespace std;

int  main(){
	int n=1;
	double e, s= 0.0;
	do{
		cout<<"e = ",cin>>e;
	}while(e>1 && e<=0);
	do{
		s += 1.0/n;
		n++;
	}while (1.0/n >= e);
	cout<<"S = "<<s;
}
