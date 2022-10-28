#include <stdio.h>

int BoiChungMin (int a, int b) {
	for (int bc_min=a; bc_min<=a*b; bc_min++) {
		if(bc_min%a==0 && bc_min%b==0) {
			return bc_min;
		}
	}
}
int main() {
	int a,b;
	printf("Nhap 2 so: \n");
	scanf("%d%d",&a,&b);
	
	printf("Boi chung lon nhat cua %d va %d la %d",a,b,BoiChungMin(a,b));
}
