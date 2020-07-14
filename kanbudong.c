#include <stdio.h>
#include <string.h>


const char g_ip[32] = "123456789";
int func1(const char *ip)
{
printf("ip:%s\n",ip);
printf("ip size:%d\n",sizeof(ip));
if(*ip == '\0')
printf("ip is none\n");
printf("g_ip:%s\n",g_ip);
printf("g_ip size:%d\n",sizeof(g_ip));
if(*ip == '\0')
printf("g_ip is none\n");
return 0;
}

int main()
{
const char ip[32]="ABCDEFG";
func1(ip);
return 0;
}