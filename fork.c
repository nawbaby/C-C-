#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
int p;

p=fork();

if(p==0)
  {
   printf("there is child\n");
  }  

if(p>0)
{
  printf("there is parent\n");
}

}
