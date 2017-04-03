#include <iostream>
using namespace std;
int main() {
    int matrix[9][9];
    int flag = 0, a = 0;
    for (int i = 0;i < 9;i++) {
        for (int j = 0;j < 9;j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0;i < 9;i++) {
        int num1[10] = {0};
        for (int j = 0;j < 9;j++) {
            num1[matrix[i][j]]++;
        }
        for (int m = 0;m < 9;m++) {
            if (num1[m + 1] != 1) {
                flag = 1;
            }
            
           // cout << num1[m] << endl;
        }
        
        
    }
	 
    flag = 0;
    for (int i = 0;i < 9;i++) {
        int num2[10] = {0};
        for (int j = 0;j < 9;j++) {
            num2[matrix[j][i]]++;
        }
        for (int m = 0;m < 9;m++) {
            if (num2[m + 1] != 1) {
                flag = 1;
            }
            //cout << num2[m] << endl;
        }
    }
    for(int k = 0;k < 3;k++) {
    	for (int i = 0;i < 3;i++) {
			int num3[10] = {0};
			for (int j = a;j < a + 3;j++) {
        	    num3[matrix[i][j]]++;
       		 }
        	for (int m = 1;m < 10;m++) {
        	    if (num3[m] != 1) {
        	        flag = 1;
        	    }
			}
			a += 3;
		}
	}
	
	a = 0;
	
	for(int k = 0;k < 3;k++) {
    	for (int i = 3;i < 6;i++) {
			int num4[10] = {0};
			for (int j = a;j < a + 3;j++) {
        	    num4[matrix[i][j]]++;
       		 }
        	for (int m = 1;m < 10;m++) {
        	    if (num4[m] != 1) {
        	        flag = 1;
        	    }
			}
			a += 3;
		}
	}
    
    for(int k = 0;k < 3;k++) {
    	for (int i = 6;i < 9;i++) {
			int num5[10] = {0};
			for (int j = a;j < a + 3;j++) {
        	    num5[matrix[i][j]]++;
       		 }
        	for (int m = 1;m < 10;m++) {
        	    if (num5[m] != 1) {
        	        flag = 1;
        	    }
			}
			a += 3;
		}
	}
    if (flag == 0) {
        cout << "yes" << endl;
    }	
    else {
        cout << "no" << endl;
    }
    
}
    
