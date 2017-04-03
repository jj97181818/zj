#include<iostream>
using namespace std;
int main() {
	int n, a[4];
	cin >> n;
	for(int i=0; i<n ; i++) {
		for(int j=0; j<4; j++){
			cin >> a[j];
		}	
		if( (a[1]-a[0])==(a[2]-a[1]) ) {			
			a[4] = a[3] + (a[1]-a[0]);
		}else if( (a[1]/a[0])==(a[2]/a[1]) ) {
			a[4] = a[3] * (a[1]/a[0]);
		}
		for(int j=0; j<4; j++){
			cout << a[j] <<" ";
		}
			cout << a[4] << endl;
		
	}
}
