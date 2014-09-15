#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
main(){
	jmp_buf env;
	int val;
	val = setjmp(env);
	if(val){
		printf("Error Something \n");
		exit(val);
	}
	longjmp(env,101);
	
}
