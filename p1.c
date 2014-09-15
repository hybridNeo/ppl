#include <stdio.h>
int main(void){
	goto l;
	

}
l:
void foo(){
	printf("Before");
	//l:printf("After\n");
}
