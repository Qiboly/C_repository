/***************************************************************/
/**************输入三个数，使从大到小排序后输出*****************/
/***************************************************************/
#if 0
#include<stdio.h>
int main()
{
	void exchange(int *q1,int *q2,int *q3);
	int a,b,c;
	int *po1,*po2,*po3;
	printf("please enter a and b and c:");
	scanf("%d%d%d",&a,&b,&c);
	po1=&a;
	po2=&b;
	po3=&c;
	exchange(po1,po2,po3);
	printf("The order is:%d,%d,%d\n",a,b,c);
	return 0;
}
void exchange(int *q1,int *q2,int *q3)
{
    void swap(int *p1,int *p2);
	if(*q1<*q2) swap(q1,q2);
	if(*q1<*q3) swap(q1,q3);
	if(*q2<*q3) swap(q2,q3);
}
void swap(int *p1,int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
#else
/***************************************************************/
/***************输入n个数，使从大到小排序后输出*****************/
/***************************************************************/
#include<stdio.h>
#include<malloc.h>
void compare(char *mat,int N);
int main()
{
	char *math;int i=0,n;
	math=(char*)malloc(sizeof(char));
	
	printf("please enter n:");
	scanf("%d",&n);

	printf("please enter data:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&math[i]);
	}
    
	compare(math,n);

    for(i=0;i<n;i++)
	printf("%d ",math[i]);
	printf("\n");
}
void compare(char *mat,int N)
{
    int i,j,k,t;
	for(i=0;i<N-1;i++)
	{
		k=i;
		for(j=i+1;j<N;j++)
			if(mat[j]>mat[k])k=j;
			if(k!=j)
			{
				t=mat[i];
				mat[i]=mat[k];
				mat[k]=t;
			}
	}
}
#endif
