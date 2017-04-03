#include <iostream>
using namespace std;
int rotation (int matrix[][100], int &r, int &c) {	//旋轉
	int a[100][100] = {0}; 
	int temp = 0;
	for (int i = 1;i < r + 1;i++) {
			for (int j = 1; j < c + 1;j++) {
				a[i][j] = matrix[(c - j) + 1][i];
			}
		}
	for (int i = 1;i < r + 1;i++) {
			for (int j = 1; j < c + 1;j++) {
				matrix[i][j] = a[i][j];
			}
		}
	temp = r;
	r = c;
	c = temp;
}
int overturn (int matrix[][100], int &r, int &c) {	//翻轉 
	int b[100][100] = {0};
	for (int i = 1;i < r + 1;i++) {
			for (int j = 1; j < c + 1;j++) {
				b[i][j] = matrix[r - i + 1][j];
			}
		}
	for (int i = 1;i < r + 1;i++) {
			for (int j = 1; j < c + 1;j++) {
				matrix[i][j] = b[i][j];
			}
		}
}
int main () {	
	int r = 0, c = 0, m = 0;
	int matrix[100][100] = {0};
	int action[100] = {0};
	while (cin >> r >> c >> m) {	//輸入 
		for (int i = 1;i < r + 1;i++) {
			for (int j = 1; j < c + 1;j++) {
				cin >> matrix[i][j];
			}
		}
		for (int i = 1;i < m + 1;i++) {
			cin >> action[i];
		}
		
		for (int i = m;i > 0;i--) {	//判定丟到旋轉或翻轉 
			if (action[i] == 0) {
				rotation(matrix,r ,c);
			}
			else {
				overturn(matrix, r, c);
			}
		}
		
		
		cout << r << " " << c <<endl;	//輸出 
		for (int i = 1;i < r + 1;i++) {
			for (int j = 1; j < c;j++) {
				cout << matrix[i][j] << " ";
			}
			cout << matrix[i][c] << endl;
		}
		
	}
	
} 

/*
r*c
12 22 32   11 12 13
11 21 31   21 22 23


11 12
21 22
31 32



11 12
21 22
31 32 
41 42


41 42
31
*/







