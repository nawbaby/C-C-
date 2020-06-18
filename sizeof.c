#include<stdlib.h>
#include<stdio.h>

int main()
{
char array[]="How many bites in there";
char array_three[]="123";
char* string = "How many bites     in there    ";

int size_a = sizeof(array);
int size_b = sizeof(string);
int size_c = sizeof(*string);
int size_d = sizeof(array_three);
printf("%d\n",size_a);
printf("%d\n",size_d);
printf("%s%s",array,array_three);
}
