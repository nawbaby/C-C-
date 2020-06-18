#include<stdlib.h>
#include<stdio.h>

int main()
{
char a[] = "1234";
char b[]= "1256";

scanf("%s",a);
scanf("%s",b);
int d = atoi(a);
if (d>1000)
{
printf("%s",a);
printf("%s",b);
printf("yes");

}else{

printf("%s",a);
printf("%s",b);
printf("no");
}
}
