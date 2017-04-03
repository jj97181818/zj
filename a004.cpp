#include<iostream>
using namespace std;
int main() {
	int y;
	while(cin >> y) {
		if ( ( y%400==0 )  ||  (( y%4==0 )&&(y%100!=0))  ){
			cout <<"¶|¦~"<< endl; 
		} else {
			cout <<"¥­¦~"<< endl; 	
		}
	}

}
