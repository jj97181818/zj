#include <iostream>
using namespace std;
int main () {
	int n, m;
	int sum = 0; //sum 為次方後的總合
	while(cin >> n >> m) {
		int out[100000] = {0}; //陣列無法開太大 
		int q = 0;
		for (int i = n; i < m + 1; i++) { 
			int number = 0, number1 = 0; //幾位數 
			int single = 0; //single 為單位數的次方
			int outputnumber = 0; //為了比較數字是否一樣
			int a = 1; //當作 /和 % 的10的倍數數字 
			 
			
			if (i / 1000000 != 0) {	//知道此數為幾次方 
				number = 7;
			}
			else if (i / 100000 != 0) {
				number = 6;
			}
			else if (i / 10000 != 0) {
				number = 5;
			}
			else if (i / 1000 != 0) {
				number = 4;
			}
			else if (i / 100 != 0) {
				number = 3;
			}
			else if (i / 10 != 0) {
				number = 2;
			}
			else if (i / 1 != 0) {
				number = 1;
			}
			
			
			
			outputnumber = i;
			number1 = number;
		
			
			for (int k = 0;k < number;k++) { 	//算出次方後相加總合 
				
				for (int p = 0;p < number1 -1;p++) {	// 得到 a (-1是為了位數和後面的0差1) 
					a *= 10;
				}
				number1--;
				single = (outputnumber / a);
			
				
				int single1 = 1;  
				for (int j = 0;j < number;j++) {//qwq 
					single1 *= single; 		//這裡的single *= single; 會回來再影響自己,所以要再開變數 
				}	
				sum += single1;
				
				outputnumber = outputnumber % a;
				single1 = 0;	
				a = 1;	
			  //我終於發現錯誤拉>w<~~~~~ 我原本在這裡把i這個變數影響到了，導致最初的迴圈跑不完rrrrrr 然後又各種影響QQ 
				 
			}
			
			
			if (sum == i) {		//決定是否印出 
				out[q] = i;
				q++;
			}
			sum = 0;
		}
		
		if (out[0] == 0) { 
			cout << "none";
		}
		else {
			for(int r = 0;r < q;r++) {
				cout << out[r] << " ";
			}
			
		}
		cout << endl; 
	}
	
	
} 



