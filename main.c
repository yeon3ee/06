#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b){
	int result=a+b;
	return result;
	//int result(a+b); 도 가능함 
}

int square(int n)
{
	return n*n;
 } 
 
int get_max(int x,int y)
{
	if (x>y)
		return x;
	else
		return y;
	//if (x>y)
		//return x;
	//return y; 도 가능  
}

int main(int argc, char *argv[])
{ 
	int a,b;
	a=3;
	b=10;
	printf("sumTwo result : %i\n",sumTwo(a,b));
	
	int n;
	
	n=4;
	printf("square result : %i \n",square(n));
	
	printf("get_max result : %i \n",get_max(a,b));
	

 } 

	


