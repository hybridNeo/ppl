#include <stdio.h>
#include <stdlib.h>
struct closure{
	void(*call)(struct closure *);
	int x;
};
void block(struct closure *env){
	env->x +=1;
	printf("Block x is %d\n",env->x);
}
struct closure *foo(int x){
	struct closure *closure =(struct closure*)malloc(sizeof(struct closure));
	closure->x = x;
	printf("x is %d\n",closure->x);
	closure->call = &block;
	return closure;
}
int main(){
	struct closure *c = foo(5);
	c->call(c);
	c->call(c);
	
}
