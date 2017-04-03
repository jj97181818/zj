#include <iostream>
using namespace std;
int main() {
	int number;
	int a[100];
	cin >> number;
	
	for(int i = 0;i < number ;i++) {
		cin >> a[i];
	}
	
	int temp[100] = {0};
	for(int i = 0;i < number;i++) {
	
		if(a[i] > a[i + 1]) {
			temp[i] = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp[i];
		}
	}
	
	for(int i = 0;i < number ;i++) {
		cout << a[i];
	}
}
