#include <stdio.h>

int fun1(unsigned word) {
	return (int) ((word << 24) >> 24);
}

int fun2(unsigned word) {
	return ((int) word << 24) >> 24;
}

int main(int argc, char const *argv[])
{
	unsigned w1 = 0x00000076;
	unsigned w2 = 0x87654321;
	unsigned w3 = 0x000000C9;
	unsigned w4 = 0xEDCBA987;

	printf("%x\n", fun1(w1));
	printf("%x\n", fun1(w2));
	printf("%x\n", fun1(w3));
	printf("%x\n", fun1(w4));
	printf("%x\n", fun2(w1));
	printf("%x\n", fun2(w2));
	printf("%x\n", fun2(w3));
	printf("%x\n", fun2(w4));

	return 0;
}
