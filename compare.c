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
