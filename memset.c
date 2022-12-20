// C program to demonstrate working of memset()
#include<stdio.h>
#include<string.h>
void main()
{
char str[50]="this is memset program";
printf("before memset=%s\n",str);
memset(str+8,'@',3*sizeof(char));
printf("after memset=%s",str);
}
/*memset() is used to fill a block of memory with a particular value.
The syntax of memset() function is as follows :
void *memset(void *ptr, int x, size_t n);

 ptr ==> Starting address of memory to be filled
 x   ==> Value to be filled
 n   ==> Number of bytes to be filled starting from ptr to be filled*/
