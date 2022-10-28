#include <stdio.h>
int tong_chu_so(int n) {
	int S = 0;
	while (n!=0) {
		S+=n%10;
		n/=10;
	}
	return S;
}

int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	printf("Tong cac chu so cua %d la %d",n,tong_chu_so(n));
}
