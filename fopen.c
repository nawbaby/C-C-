#include<stdlib.h>
#include<stdio.h>

int main()
{
  FILE* fp = NULL;
  fp =fopen("read","r");
  char output_str[60];

  if(fp == NULL)
 {
 perror("无法打开文件");
 return(-1);
 }
 while (fgets(output_str,60,fp) != NULL)
 {
  puts(output_str);
  printf("换行");
 }
 fclose(fp);
}
