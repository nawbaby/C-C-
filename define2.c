#include<stdlib.h>
#include<stdio.h>

#define A(x) T##x
#define B(x) #@x
#define C(x) #x

int main()
{
 int a=1,b,c,d;
 printf("%d%d%d%d",a,b,c,d);
}