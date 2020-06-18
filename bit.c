#include<stdlib.h>
#include<stdio.h>


 int  xmit_hash(int slaves,int sport,int dport,int sip,int dip)
 { 
    int hash;
   
    hash = (sport << 16) + dport;
	printf("%d\n",hash);
    hash = hash ^ sip ^ dip;
	printf("%d\n",hash);
    hash = hash ^ (hash >> 16);
	printf("%d\n",hash);
    hash = hash ^ (hash >> 8);
	printf("%d\n",hash);
    return ((hash>>1) % slaves);
};

void main()
{
   int sip = 0xC0A80BA0;    //192.168.11.150
   int dip = 0xC0A80B98;     //192.168.11.152
   int ret = xmit_hash(2,445,54247,sip,dip);
   printf("%d\n",ret);
}
