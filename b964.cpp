#include <iostream>
using namespace std;
int swap(int a[],int number) {
	int temp[1000] = {0};
	for (int j = 0;j < number;j++) {
		for (int i = 0;i < number - 1;i++) {
			if (a[i] > a[i + 1]) {
				temp[i] = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp[i];
			}
		}	
	}
	for (int i = 0;i < number - 1;i++) {
		cout << a[i] << " ";
   }
   cout << a[number - 1] << endl;
	for (int i = 0;i < number;i++) {
		return a[i];
   }
}


int main() {
	int number;
	int a[1000];
	int worst = 0;
	int best = 0;
	while (cin >> number) {
		for (int i = 0;i < number ;i++) {
			cin >> a[i];
		}
		swap (a, number);
		
		for (int i = 0;i < number;i++) {
			if (a[i] >= 60) { 
				if (i != 0){		//50 60 70 80
					worst  = a[i - 1];
					cout << worst <<endl;
					cout << a[i] <<endl;
					break;	
				}
				else {	//60 61 62
					cout << "best case" <<endl;
					cout << a[0] <<endl;
					break; 
				}
			}
			if (a[number - 1] < 60){	//30 40 50
				worst  = a[number - 1];
				cout << worst <<endl;
				cout << "worst case" <<endl;
				break;
			}
	   }
	}	
}




