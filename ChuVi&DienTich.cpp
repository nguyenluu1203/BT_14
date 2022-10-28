#include <stdio.h>
#include <math.h>

float ChuVi(int a, int b, int c) {
	float P = a + b + c;
	return P;
}

float DienTich (int a, int b, int c) {
	float  p = (a + b + c)/2; 
	float S = sqrt(p*(p-a)*(p-b)*(p-c));
	return S;
}

bool KiemTraTamGiac (int a, int b, int c) {
	if (a<=0 || b<=0 || c<=0) {
		return true;
	}
	if (a+b>c && b+c>a && a+c>b) {
		return false;
	}
}

int main() {
	int a,b,c;
	do {
		printf("Nhap 3 canh cua tam giac: \n");
		scanf("%d%d%d",&a,&b,&c);
		
	}
	while (KiemTraTamGiac(a,b,c) && printf("Day khong phai tam giac, vui long nhap lai\n"));
	
	printf("Chu vi cua tam giac la %f\n",ChuVi(a,b,c));
	printf("Dien tich cua tam giac la %f", DienTich(a,b,c));
}
