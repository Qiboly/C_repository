#include<stdio.h>
#define uint unsigned int
uint happiness;
#define hap happiness
typedef struct 
{
	uint healthy ;
	uint love    ;
	uint dream   ;
	uint money   ;
}have;
have oneself[2],spouse[2]; 

void init_data()
{
	printf("please enter own healthy,money,love,dream[1(have) or 0(haven't)]:\n");
	scanf("%d,%d,%d,%d",&oneself[0].healthy,&oneself[0].money,&oneself[0].love,&oneself[0].dream);
    oneself[1].healthy=oneself[0].healthy;oneself[1].money=oneself[0].money;
	oneself[1].love=oneself[0].love;oneself[1].dream=oneself[0].dream;

	printf("please enter spouse healthy,money,love,dream[1(have) or 0(haven't)]:\n");
	scanf("%d,%d,%d,%d",&spouse[0].healthy,&spouse[0].money,&spouse[0].love,&spouse[0].dream);
	spouse[1].healthy=spouse[0].healthy;spouse[1].money=spouse[0].money;
	spouse[1].love=spouse[0].love;spouse[1].dream=spouse[0].dream;
	
}
uint cond()
{	
	uint i,condition[4];

	if(oneself[1].healthy&&oneself[1].dream)oneself[1].money=1;
    if(spouse[1].healthy&&spouse[1].dream)spouse[1].money=1;

	condition[0]=oneself[1].healthy&spouse[1].healthy;
	condition[1]=oneself[1].money|spouse[1].money;
	condition[2]=oneself[1].love&spouse[1].love;
	condition[3]=!(oneself[1].dream^spouse[1].dream);

	for(i=0;i<4;i++)
	{
		if(condition[i]==0){hap=0;break;}
		else hap=1;
	}
	return hap;
}

void main()
{
	init_data();
	cond();

	if(hap==1)
		printf("\nYou are happiness!\n\n");
	else
		printf("\nYou are unhappiness!\n\n");
}
