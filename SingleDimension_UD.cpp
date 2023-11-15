/*
	1. Nhap so phan tu cua mang(n) va khai bao mang 1 chieu so nguyen
	gom n phan tu
	2. Nhap gia tri cac phan tu cua mang
	3. In ra cac phan tu trong mang
	4. In ra cac phan tu co gia tri chan trong mang
	5. Tinh tong cac phan tu co chi so le trong mang
*/
#include <stdio.h>
int main(){
	//1. Nhap so phan tu (n), khai bao mang 1 chieu so nguyen n pt
	//1.1. Buoc 1: Khai bao n va nhap gia tri n
	int n;
	printf("Nhap vao so phan tu cua mang:");
	scanf("%d",&n);
	//1.2. Buoc 2: Khai bao mang so nguyen 1 chieu n phan tu
	int numbers[n];
	//2.Nhap gia tri cac phan tu cua mang
	//2.1. Buoc 1: Su dung vong lap de nhap gia tri cho tung phan tu
	printf("Nhap gia tri cac phan tu cua mang:\n");
	for(int i=0;i<n;i++){
		//2.2. Buoc 2: Nhap gia tri cho 1 phan tu
		printf("numbers[%d]=",i);
		scanf("%d",&numbers[i]);
	}
	//3. In ra gia tri cac phan tu mang
	//3.1. DUyet cac phan tu cua mang - for
	printf("Gia tri cac phan tu trong mang la:\n");
	for(int i = 0; i<n; i++){
		//3.2. In ra gia tri cua phan tu
		printf("%d\t",numbers[i]);
	}
	printf("\n");
	//4. In ra gia tri cac phan tu trong mang co gia tri chan
	//4.1. Duyet cac phan tu mang - for
	printf("Cac phan tu co gia tri chan trong mang la:\n");
	for(int i=0;i<n;i++){
		//4.2. Kiem tra phan tu co gia tri chan hay khong? - if
		if(numbers[i]%2==0){
			//4.3. Neu gia tri chan - In ra
			printf("%d\t",numbers[i]);
		}
	}
	printf("\n");
	//5. Tinh tong cac phan tu co chi so le trong mang
	//5.1. Khai bao va khoi tao gia tri bien tong bang 0
	int sum = 0;
	//5.2. Duyet cac phan tu trong mang - for
	for(int i=0;i<n;i++){
		//5.3. Kiem tra chi so phan tu co le ko?
		if(i%2!=0){
			//5.4. Neu chi so le cong gia tri phan tu vao tong
			sum+=numbers[i];
		}
	}	
	printf("Tong cac phan tu co chi so le trong mang la: %d\n",sum);
}
