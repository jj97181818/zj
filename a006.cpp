#include<iostream>
#include<cmath> 
using namespace std;
int main(){
	int a, b, c;
	int x1, x2;
	while(cin >> a >> b >> c){
		if((b*b-4*a*c)>0) {
			x1 = (-b + (sqrt( b*b-4*a*c )) ) / (2*a);
			x2 = (-b - (sqrt( b*b-4*a*c )) ) / (2*a);
			cout << "Two different roots x1=" << x1 <<" , "<< "x2=" << x2 << endl;
		}else if((b*b-4*a*c)==0) {
			x1 = (-b) / (2*a);
			cout << "Two same roots x=" << x1 << endl;
		}else {
			cout<< "No real root" << endl;
		}
	}	
}  
