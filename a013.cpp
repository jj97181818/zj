#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1, s2;
	int sum = 0, sum1 = 0, sum2 = 0;
	while (cin >> s1 >> s2) {
		for(int i = 0; i < s1.length();i++) {
			if ((s1[i] == 'I') && (s1[i+1] == 'V')) {     //一些特別的羅馬數字換算  4  IV
				s1[i] = 'A';
				s1[i+1] = 'A';
				sum1 += 4;
			}
			if ((s1[i] == 'I') && (s1[i+1] == 'X')) {	    //9	   IX 
				s1[i] = 'A';
				s1[i+1] = 'A';
				sum1 += 9;
			}
			if ((s1[i] == 'X') && (s1[i+1] == 'L')) {		//40	XL
				s1[i] = 'A';
				s1[i+1] = 'A';
				sum1 += 40;
			}
			if ((s1[i] == 'X') && (s1[i+1] == 'C')) {		//90	XC
				s1[i] = 'A';
				s1[i+1] = 'A';
				sum1 += 90;
			}
			if ((s1[i] == 'C') && (s1[i+1] == 'D')) {		//400	CD    
				s1[i] = 'A';
				s1[i+1] = 'A';
				sum1 += 400;
			}
			if ((s1[i] == 'C') && (s1[i+1] == 'M')) {		//900	CM 
				s1[i] = 'A';
				s1[i+1] = 'A';
				sum1 += 900;
			}
			switch (s1[i]) {
				case 'I':
					sum1 += 1;
					break;
				case 'V':
					sum1 += 5;
					break;
				case 'X':
					sum1 += 10;
					break;
				case 'L':
					sum1 += 50;
					break;	
				case 'C':
					sum1 += 100;
					break;
				case 'D':
					sum1 += 500;
					break;
				case 'M':
					sum1 += 1000;
					break;	
				case 'A':
					sum1 += 0;
					break; 
			}
		}
		for(int i = 0; i < s2.length();i++) {
			if ((s2[i] == 'I') && (s2[i+1] == 'V')) {     //一些特別的羅馬數字換算  4  IV
				s2[i] = 'A';
				s2[i+1] = 'A';
				sum2 += 4;
			}
			if ((s2[i] == 'I') && (s2[i+1] == 'X')) {	    //9	   IX 
				s2[i] = 'A';
				s2[i+1] = 'A';
				sum2 += 9;
			}
			if ((s2[i] == 'X') && (s2[i+1] == 'L')) {		//40	XL
				s2[i] = 'A';
				s2[i+1] = 'A';
				sum2 += 40;
			}
			if ((s2[i] == 'X') && (s2[i+1] == 'C')) {		//90	XC
				s2[i] = 'A';
				s2[i+1] = 'A';
				sum2 += 90;
			}
			if ((s2[i] == 'C') && (s2[i+1] == 'D')) {		//400	CD    
				s2[i] = 'A';
				s2[i+1] = 'A';
				sum2 += 400;
			}
			if ((s2[i] == 'C') && (s2[i+1] == 'M')) {		//900	CM 
				s2[i] = 'A';
				s2[i+1] = 'A';
				sum2 += 900;
			}
			switch (s2[i]) {
				case 'I':
					sum2 += 1;
					break;
				case 'V':
					sum2 += 5;
					break;
				case 'X':
					sum2 += 10;
					break;
				case 'L':
					sum2 += 50;
					break;	
				case 'C':
					sum2 += 100;
					break;
				case 'D':
					sum2 += 500;
					break;
				case 'M':
					sum2 += 1000;
					break;	 
			}
		}
		if (sum1 > sum2) {
			sum = sum1 - sum2;
		}
		else {
			sum = sum2 - sum1;
		}
		
		
		
		if(sum == 0) {
			cout<< "ZERO";
		}
		while (sum > 0) {						
			if (sum >= 1000) {						//千位數轉為羅馬數字 
				int n = 0;
				n = sum / 1000;
				sum = sum % 1000;
				for(int i = 0;i < n; i++) {
					cout << "M";
				}	
			}
			
			if (sum >= 100) {					    //百位數轉為羅馬數字  
				int n = 0;
				n = sum / 100;
				sum = sum % 100;
					if (n == 4) {
						cout << "CD";
					}
					else if (n == 9) {
						cout << "CM";
					}
					else {
						if (n < 5) {
							for(int i = 0;i < n; i++) {
								cout << "C";
							}
						}
						else {
							cout<< "D";
							n -= 5;
							for(int i = 0;i < n; i++) {
								cout << "C";
							}
						}
						
					}	
				}
				
			 
			
			if (sum >= 10) {								//十位數轉為羅馬數字 
				int n = 0;
				n = sum / 10;
				sum = sum % 10;
					if (n == 4) {
						cout << "XL";
					}
					else if (n == 9) {
						cout << "XC";
					}
					else {
						if (n < 5) {
							for(int i = 0;i < n; i++) {
								cout << "X";
							}
						}
						else {
							cout<< "L";
							n -= 5;
							for(int i = 0;i < n; i++) {
								cout << "X";
							}
						}
						
					}
			}
			
			if ( sum > 0) {										//個位數轉為羅馬數字 
					
				int n = 0;
				n = sum / 1;
				sum = 0;
					if (n == 4) {
						cout << "IV";
					}
					else if (n == 9) {
						cout << "IX";
					}
					else {
						if (n < 5) {
							for(int i = 0;i < n; i++) {
								cout << "I";
							}
						}
						else {
							cout<< "V";
							n -= 5;
							for(int i = 0;i < n; i++) {
								cout << "I";
							}
						}
						
					}
			}
			
		
		}
		
		sum = 0;
		sum1 = 0;
		sum2 = 0;
		cout <<	endl;
	}
}


/*
4  IV
9	IX
40	XL
90	XC
400	CD
900	CM


*/

/*
100 C
200 CC
300 CCC
*400 CD
500 D
600 DC
700 DCC
800 DCCC
*900 CM

*/
