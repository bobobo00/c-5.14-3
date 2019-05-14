#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int Math(int money){
	int num = money;
	int empty = money;
	while (empty >1){
		num = money + empty/2;
		empty = empty / 2 + empty % 2;
	
	}
	return num;
}

int main(){
	int money = 0;
	printf("Plese give me some money!\n");
	scanf("%d", &money);
	printf("Have %d water", Math(money));
	system("pause");
	return 0;
}