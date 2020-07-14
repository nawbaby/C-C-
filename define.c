#include<stdlib.h>
#include<stdio.h>

#define CAT(x,y)    #(x##y) \
#define AAA "/nasgui/storage" \
#define BBB  "/etc"  \
#define CCC  AAA#BBB  \

int main()
{
 
 printf("%s",BBB);
}
