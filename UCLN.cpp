#include <stdio.h>

int UocChungMax (int a, int b) {
	for (int uc_max=a; uc_max>=1; uc_max--) {
		if (a%uc_max==0 && b%uc_max==0) {
			return uc_max;
		} 
	}
}
int main() {
	int a,b;
	printf("Nhap 2 so: \n");
	scanf("%d%d",&a,&b);
	
	printf("Uoc chung lon nhat cua %d va %d la %d",a,b,UocChungMax(a,b));
}

