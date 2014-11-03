#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int sum(int num,...){
	va_list valist;
	int sum = 0;
	va_start(valist,num);
	int i;
	for(i=0;i<num;i++){
		sum+= va_arg(valist,int);
	}
	va_end(valist);
	return sum;

}
int main(void){
	printf("%d\n",sum(5,1,2,3,4,5));

}
