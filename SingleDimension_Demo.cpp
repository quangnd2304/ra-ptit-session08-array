#include <stdio.h>
int main(){
	//1. Khai bao mang 1 chieu so nguyen gom 5 phan tu
	//Syntax: Datatype ArrayName[size]
	int numbers[5];
	//2. Khai bao va khoi tao mang 1 chieu so thuc co cac
	//gia tri la: 3.4, 7.2, 9.1
	//Syntax: Datatype ArrayName[] = {value1,...,valuen}
	float arrFloat[] = {3.4,7.2,9.1};
	//3. Khai bao mang so nguyen gom 4 phan tu, trong do
	//co 2 phan tu dau co gia tri la -3 va 8
	//Syntax: Datatype ArrayName[n] = {value1,...,valueM}
	int arrInt[4] = {-3,8};
	//4. In ra gia tri cac phan tu cua mang arrInt
	//Truy cap phan tu cua mang: ArrayName[index]
	printf("Gia tri cac phan tu trong mang arrInt la:\n");
	for(int i=0;i<4;i++){
		printf("%d\t",arrInt[i]);
	}
	printf("\n");
	//5. Su dung vong lap nhap gia tri cho cac phan tu mang numbers
	for(int i=0;i<5;i++){
		printf("numbers[%d]=",i);
		scanf("%d",&numbers[i]);
	}
	//6. Tinh tong cac phan tu cua mang numbers
	int sum = 0;
	for(int i=0;i<5;i++){
		sum+=numbers[i];
	}
	printf("Tong gia tri cac phan tu trong mang numbers la: %d\n",sum);
}
