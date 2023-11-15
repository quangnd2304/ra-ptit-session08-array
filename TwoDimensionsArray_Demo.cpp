#include <stdio.h>
int main(){
	//1. Khai bao mang 2 chieu so nguyen gom 3 dong va 4 cot
	//syntax: Datatype ArrayName[row][col]
	int numbers[3][4];
	//2. Nhap gia tri cho cac phan tu cua mang numbers
	//Duyet theo dong
	for(int i=0;i<3;i++){
		//Duyet theo cot
		for(int j=0;j<4;j++){
			printf("numbers[%d][%d]=",i,j);
			scanf("%d",&numbers[i][j]);
		}
	}
	//3. In gia tri cac phan tu theo ma tran
	printf("Gia tri cac phan tu trong mang:\n");
	for(int i=0; i<3; i++){
		for(int j=0;j<4;j++){
			printf("%d\t",numbers[i][j]);
		}
		printf("\n");
	}
}
