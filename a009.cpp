#include <iostream>
using namespace std;
int main() {
	string s;
	int length;
	while (cin >> s) {
		length = s.length();
		for (int i = 0; i < length; i++) {
			cout << char (s.at(i) - 7);          //    int( s.at(i) )  ��X��i�Ӧ�m��ASCII 
		}									   //	 char( s.at(i) ) ��X��i�Ӧ�m���r�� 			
		cout << endl;
	}  
}
