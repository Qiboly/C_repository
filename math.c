/*有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，求最后留下来的是原来的第几号的那位*/
#include<stdio.h>
#include<stdlib.h>
void deal(int *q);
void main()
{	
	int N,*p;
	printf("please input N:");
    scanf("%d",&N);
	while(N<1)
	{
		printf("Input Error !\n");
	    printf("please input N again:");
	    scanf("%d",&N);
	}
	p=&N;
	deal(p);
	printf("initial number:%d\n",N);
}
void deal(int *q)
{
	int i,inum=0,store=0,remain=0;
	char *num;
	//num=(char*)malloc(sizeof(*q));
	for(i=0;i<*q;i++)num[i]='b';

	while(1)
	{
		if(num[inum]=='b')
		{
		if(store==(*q-1))break;
		remain++;remain%=3;
		if(remain==0){num[inum]='s';store++;}
		}
		inum++;inum%=*q;		
	}
	*q=inum+1;		
}
