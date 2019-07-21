#include <iostream>

int nNum = 0;
void function1()
{
	if (nNum > 0) {
		printf("func1 num > 0");
	}
	else {
		printf("func1 num <= 0");
	}
}

void function2()
{
	if (nNum > 0) {
		printf("func1 num > 0");
	}
	else {
		printf("func1 num <= 0");
	}
}

int main()
{
	printf("hello world!");
	function1();
	system("PAUSE ");
}