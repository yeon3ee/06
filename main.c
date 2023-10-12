#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int combination(int n, int r);
int factorial(int num);

int main(int argc, char *argv[])
{
	int n,r;
	
	
	printf("input n: \n");
	scanf("%d",&n);
	printf("input r: \n");
	scanf("%d",&r);
	
	 if (n < 0 || r < 0 || r > n) {
        printf("n과 r은 음수가 아니고, r은 n보다 작거나 같아야 합니다.\n");
    } else {
        int result = combination(n, r);
        printf("조합 C(%d, %d)은 %d 입니다.\n", n, r, result);
    }
    
    return 0;

	
}

int combination(int n, int r){
	int div1,div2;
	div1=factorial(n);
	div2=factorial(n-r)*factorial(r);
	return div1/div2;
	
}

int factorial(int num) {
    int res = 1;
    int i;
    for ( i = 1; i <= num; i++) {
        res *= i;
    }
    return res;
}





 


