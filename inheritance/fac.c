#include <stdio.h>
#include <stdlib.h>
int main(void){
	printf("Enter number \n");
	int n;
	scanf("%d",&n);
	int b = fac_times(n,1);
	printf("%d \n",b);
}
int fac_times(int n,int acc){
	label:
		if(n==0){
			return acc;
		}
		acc *= n--;
		goto label;
}
