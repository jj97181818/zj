#include <iostream>
using namespace std;
int main() {
	int row = 0, column = 0;
	char matrix[100][100];
	while (cin >> row >> column) {
		
		for (int i = 0;i < row;i++) {
			for (int j = 0;j < column;j++) {
				cin >> matrix[i][j];
			} 
		}
		for (int i = 0;i < column;i++) {
			for (int j = 0;j < row;j++) {
				cout << matrix[j][i] << " ";
			} 
			cout << endl; 
		}
	}
}
/* 
原本:11 12 13 21 22 23
後來:11 21 12 22 13 23

錯誤示範變成:
		
*/ 
