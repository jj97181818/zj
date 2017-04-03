#include <iostream>
using namespace std;
int main() {
	long int a = 0;
	int count = 0;
	int i = 2;
	
	while (cin >> a) {
		while(i <= a) {
			
			while (a % i == 0) {
				a /= i;
				count += 1;	
			} 
			
			if (count > 1) {
				cout << i << "^" << count;
				if(a != 1){
					cout << " * "; 
				}
			}
			else if (count==1) {
				cout << i ;
				if(a != 1){
					cout << " * "; 
				}
			}
			
			count = 0;
			i++;
			
		}
		cout << endl;
		i = 2;
		a = 0;
		}
	}
