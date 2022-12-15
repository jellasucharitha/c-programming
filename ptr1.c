#include<stdio.h>
void main()
{
int a=10,*ptr=&a;
float b=4.5,*ptr2=&b;
int *ptr3=NULL;
printf("value of ptr1=address of a=%p\n",ptr);
printf("value of ptr2=address of b=%p\n",ptr2);
printf("value of a=value at ptr1=%d\n",*ptr);
printf("value of b=value at ptr2=%f\n",*ptr2);
printf("address of ptr3=%p\n",ptr3);
printf("%p\n",++(ptr2));
printf("%d\n",++(*ptr));
}
