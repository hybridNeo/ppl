#include<stdio.h>
#include<stdarg.h>
float avg(int,...);
int main()
{
	printf("average of 2 3 4 5 is %f\n",avg(4, 2,3,4,5));
	printf("average of 10 11 12 is %f\n",avg(3, 10,11,12));
	

}
float avg(int num,...)
{
	va_list valist;
    float sum = 0.0;
    int i;

    /* initialize valist for num number of arguments */
    va_start(valist, num);

    /* access all the arguments assigned to valist */
    for(i = 0; i < num; i++)
    {
       
       sum += va_arg(valist, int);
    }
    /* clean memory reserved for valist */
    va_end(valist);

    return sum/num;


}
