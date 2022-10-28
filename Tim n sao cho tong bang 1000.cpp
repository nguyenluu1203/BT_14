#include <stdio.h>

int TinhTong() {
	int n=0, S=0;
	while (S<10000) {
		n++;
		S+=n;
	}
	return n;
}

int main() {
	printf("So can tim la %d",TinhTong());
}
