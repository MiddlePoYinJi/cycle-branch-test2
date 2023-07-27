#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>

int main() {

    int sum = 0;

    for (int x = 1000; x <= 2000; x++) {
        if ((x % 4 == 0) && (x % 100 != 0)) {
            printf("%d ", x);
            sum++;
        }
        else if (x % 400 == 0) {
            printf("%d ", x);
            sum++;
        }
    }
    printf("\n%d", sum);
    return 0;
}