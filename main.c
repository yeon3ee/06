#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void func1(void){
	int x;
	printf("func1 x is at %p\n",&x);
	
}

int main(void){
	int x;
	printf("main x is at %p\n",&x);
	//%p는 16진수임 . x가 변수-> 메모리 안에서 몇번쨰 메모리에 위치해있는지 알 수 있음.  
	func1();
	
	return 0;
}
	
