#include <stdio.h>

int main(void) {
	for(int x = 1;x <= 100;x++) {
		if(x % 15 ==0) {
			printf("fizzbuzz\n");
		}  else if(x % 3 ==0) {
			printf("fizz\n");
		} else if(x % 5 ==0) {
			printf("buzz\n");
		} else {
			printf("%d\n",x);
		}
	}
}
