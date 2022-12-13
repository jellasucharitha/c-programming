#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void main()
{
int id;
id=fork();
if(id==0)
{
printf("In child process:\n");
printf("child PID=%d\n",getpid());
printf("child PPID=%d\n",getppid());
}
//wait(NULL);
if(id>0)
{
printf("In parent process:\n");
printf("parent PID=%d\n",getpid());
printf("parent PPID=%d\n",getppid());
//wait(NULL);
sleep(1000);
}
}
/*void main()
{
int id;
id=fork();
id=fork();
id=fork();
//id=fork();
printf("hello\n");
}*/

