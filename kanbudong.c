 1 #include <stdio.h>
 2 #include <string.h>
 3 
 4 
 5 const char g_ip[32] = "123456789";
 6 int func1(const char *ip)
 7 {
 8         printf("ip:%s\n",ip);
 9         printf("ip size:%d\n",sizeof(ip));
10         if(*ip == '\0')
11                 printf("ip is none\n");
12         printf("g_ip:%s\n",g_ip);
13         printf("g_ip size:%d\n",sizeof(g_ip));
14         if(*ip == '\0')
15                 printf("g_ip is none\n");
16         return 0;
17 }
18 
19 int main()
20 {
21         const char ip[32]="ABCDEFG";
22         func1(ip);
23         return 0;
24 }

/*
	通过函数传递进去的参数并不会依照定义时候的大小 			   
*/