#include<iostream>
using namespace std;
int main(){
	int much;
	while(cin >> much){
		//輸入 
		int original[much][4];
		for (int t = 0 ; t < much ; t ++){
			for(int t2 = 0 ; t2 < 4 ; t2 ++){
				cin >> original[t][t2];
			}
		}
		//找個種族兵種數 
		int ra1 = 0, ra2 = 0, ra3 = 0;
		for (int t = 0 ; t < much ; t ++){
			switch (original[t][0]){
				case 1:
					ra1 ++;
					break;
				case 2:
					ra2 ++;
					break;
				default:
					ra3 ++;
			}
		}
		
		//轉換 
		int deal1[ra1][3], deal2[ra2][3], deal3[ra3][3], in1 = 0, in2 = 0, in3 = 0;
		
		for (int t = 0 ; t < much ; t ++){
			if (original[t][0] == 1){
				deal1[in1][0] = original[t][1];
				deal1[in1][1] = original[t][2];
				deal1[in1][2] = original[t][3];
				in1 ++;
			} else if (original[t][0] == 2){
				deal2[in2][0] = original[t][1];
				deal2[in2][1] = original[t][2];
				deal2[in2][2] = original[t][3];
				in2 ++;
			} else{
				deal3[in3][0] = original[t][1];
				deal3[in3][1] = original[t][2];
				deal3[in3][2] = original[t][3];
				in3 ++;
			}
		}
		//可怕的判斷
		int judgeal = 0;
		for (int t1 = 0 ; t1 < ra1 ; t1 ++){
			for (int t2 = 0 ; t2 < ra2 ; t2 ++){
				for (int t3 = 0, judge1 = 0, judge2 = 0, judge3 = 0 ; t3 < ra3 ; t3 ++){
					judge1 = 0;
					judge2 = 0;
					judge3 = 0;
					if (deal1[t1][0] == 1){
						judge1 = 1;
					}
					if (deal1[t1][1] == 1){
						judge2 = 1;
					}
					if (deal1[t1][2] == 1){
						judge3 = 1;
					}
					if (deal2[t2][0] == 1){
						judge1 = 1;
					}
					if (deal2[t2][1] == 1){
						judge2 = 1;
					}
					if (deal2[t2][2] == 1){
						judge3 = 1;
					}
					if (deal3[t3][0] == 1){
						judge1 = 1;
					}
					if (deal3[t3][1] == 1){
						judge2 = 1;
					}
					if (deal3[t3][2] == 1){
						judge3 = 1;
					}
					if (judge1 == 1 && judge2 == 1 && judge3 == 1){
						judgeal ++;
					}
				}
			}
		}
		cout << judgeal;
	}
}