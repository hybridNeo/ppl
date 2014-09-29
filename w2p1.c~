#include <stdio.h>
#include <stdlib.h>

double cm_to_inches(double cm){
  return cm/2.54;
}
void foo(){
  printf("Hello\n");
}
double getInput(){
  float d;
  scanf("%f",&d);
  return d;
}
int main(void){
	double (*func1)(double) = cm_to_inches;ls
  double (*getIn)(void) = getInput;
  printf("%f \n",(func1)((getIn)()));  
  void (*func2)(void) = foo;
  (func2)();
}
