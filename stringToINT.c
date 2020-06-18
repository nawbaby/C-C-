#include<stdio.h>
#include<stdlib.h>
int main()
{
char str[] = "100";
char *str2 = NULL; 
int    t_a = atoi(str);
itoa(t_a,str2,2);
printf("%s",str2);
printf("%d",t_a); 

}
