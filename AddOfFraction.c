#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>

int main() {
	float sum = 0;
	int flag = 1;
	for (int x = 1; x <= 100; x++) {
		sum += flag * 1.0 / x;          //乘以1、乘以-1，就完成了+-的转换
		flag = -flag;                   //--1 = 1
	}
	printf("%f\n", sum);
	return 0;
}