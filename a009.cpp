#include <iostream>
using namespace std;
int main() {
	string s;
	int length;
	while (cin >> s) {
		length = s.length();
		for (int i = 0; i < length; i++) {
			cout << char (s.at(i) - 7);          //    int( s.at(i) )  算出第i個位置的ASCII 
		}									   //	 char( s.at(i) ) 輸出第i個位置的字元 			
		cout << endl;
	}  
}
