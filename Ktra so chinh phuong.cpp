#include <stdio.h>

bool SquareNumber (int n) {
	for (int i=0; i*i<=n; i++) {
		if(n==i*i) {
			return true;
		}
	}
	return false;
}
int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	if(SquareNumber(n)) {
		printf("%d la so chinh phuong",n);
	}
	else {
		printf("%d khong phai la so chinh phuong",n);
	}
}
