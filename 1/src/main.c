#include <stdio.h>

int main(void) {

	int val;

	while(scanf("%d", &val), val != 42) {
		printf("%d\n", val);
	}
	return 0;
}