#include<stdlib.h>
#include<stdio.h>
#include<sys/io.h>
int main()
{
int rt = access("/etc",0);
printf("%d",rt);
}
