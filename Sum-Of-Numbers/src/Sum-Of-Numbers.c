#include <stdio.h>
#include <stdlib.h>
int main() {
	int num = 0;
	int sum = 0;

	while (sum < 100) {
		printf("Enter a number: ");
		scanf("%d", &num);
		sum = sum + num;
		printf("Your total is: %d\n", sum);
	}
	printf("Done");
	return 0;
}
