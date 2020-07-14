#include<unistd.h>
#include<stdio.h>
int main()
{
 char* ch = "Hello World\n";
 int length = strlen(ch);
 int len = sizeof(ch);
 printf("strlen:%d,sizeof:%d;\n",length,len);
 write(1,ch,length);
}
