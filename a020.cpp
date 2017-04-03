#include <iostream>
using namespace std;
int confirmation(string &s, int &number) {
	switch (s[0]) {
		case 'A': 
		number = 1; 
		break;
		case 'B': 
		number = 10; 
		break;
		case 'C': 
		number = 19; 
		break;
		case 'D': 
		number = 28; 
		break;
		case 'E': 
		number = 37; 
		break;
		case 'F': 
		number = 46; 
		break;
		case 'G': 
		number = 55; 
		break;
		case 'H': 
		number = 64; 
		break;
		case 'I': 
		number = 39; 
		break;
		case 'J': 
		number = 73; 
		break;
		case 'K': 
		number = 82; 
		break;
		case 'L': 
		number = 2; 
		break;
		case 'M': 
		number = 11; 
		break;
		case 'N': 
		number = 20; 
		break;
		case 'O': 
		number = 48; 
		break;
		case 'P': 
		number = 29; 
		break;
		case 'Q': 
		number = 38; 
		break;
		case 'R': 
		number = 47; 
		break;
		case 'S': 
		number = 56; 
		break;
		case 'T': 
		number = 65; 
		break;
		case 'U': 
		number = 74; 
		break;
		case 'V': 
		number = 83; 
		break;
		case 'W': 
		number = 21; 
		break;
		case 'X': 
		number = 3; 
		break;
		case 'Y': 
		number = 12; 
		break;
		case 'Z': 
		number = 30; 
		break;
	}
	
	for	(int i = 1;i < 9;i++) {
		number += (s[i] - 48) * (9 - i);
	}
	number += (s[9] - 48);

}
int main() {
	string identification;
	int number = 0;
	while (cin >> identification) {
		confirmation(identification, number);
		if (number % 10 == 0){
			cout << "real" <<endl;
		}
		else {
			cout << "fake" <<endl;
		}
	}
	
}
