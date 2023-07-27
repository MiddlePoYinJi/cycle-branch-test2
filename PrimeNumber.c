#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>

int main() {

	int count = 0;

	for (int x = 1000; x <= 2000; x++) {
		if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0) {
			printf("%d ", x);
			count++;
		}
	}
	printf("\n%d", count);
	return 0;
}