#include <iostream>
using namespace std;
int main () {
	int n, m;
	int sum = 0; //sum ������᪺�`�X
	while(cin >> n >> m) {
		int out[100000] = {0}; //�}�C�L�k�}�Ӥj 
		int q = 0;
		for (int i = n; i < m + 1; i++) { 
			int number = 0, number1 = 0; //�X��� 
			int single = 0; //single �����ƪ�����
			int outputnumber = 0; //���F����Ʀr�O�_�@��
			int a = 1; //��@ /�M % ��10�����ƼƦr 
			 
			
			if (i / 1000000 != 0) {	//���D���Ƭ��X���� 
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
		
			
			for (int k = 0;k < number;k++) { 	//��X�����ۥ[�`�X 
				
				for (int p = 0;p < number1 -1;p++) {	// �o�� a (-1�O���F��ƩM�᭱��0�t1) 
					a *= 10;
				}
				number1--;
				single = (outputnumber / a);
			
				
				int single1 = 1;  
				for (int j = 0;j < number;j++) {//qwq 
					single1 *= single; 		//�o�̪�single *= single; �|�^�ӦA�v�T�ۤv,�ҥH�n�A�}�ܼ� 
				}	
				sum += single1;
				
				outputnumber = outputnumber % a;
				single1 = 0;	
				a = 1;	
			  //�ڲש�o�{���~��>w<~~~~~ �ڭ쥻�b�o�̧�i�o���ܼƼv�T��F�A�ɭP�̪쪺�j��]����rrrrrr �M��S�U�ؼv�TQQ 
				 
			}
			
			
			if (sum == i) {		//�M�w�O�_�L�X 
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



