#include <stdio.h>

int main(void) {
	for(int x = 1;x <= 100;x++) {
		if(x % 2 ==1) {
			printf("%d",x);
		}
	}
}