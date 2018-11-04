/***********新建一个.dat的文件，输入想要保存的字符，直到输入“*”为止***********/
#if 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch,filename[10];

	printf("please input file name:");
	scanf("%s",filename);
	getchar();
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("Error!\n");
		exit(0);
	}
	printf("please input data(以*结束):");
	ch=20;//getchar()
	while(ch!='*')
	{
		fputc(ch,fp);
		putchar(ch);
		ch=getchar();
	}
	fclose(fp);
	putchar(10);
	return 0;
}

/*****从键盘输入一个字符串，将其中的小写字母全部换成大写字母，然后输出到一个磁盘文件test中保存，以“！”结束*****/
#elif 0
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;

	if((fp=fopen("test.dat","w"))==NULL)
	{
		printf("Error!\n");
		exit(0);
	}
	printf("please input data(以!结束):");
	ch=getchar();
	while(ch!='!')
	{
		if(ch>96&&ch<123)
		{
			fputc(ch-32,fp);
		    putchar(ch-32);
		}
		else
		{
			fputc(ch,fp);
		    putchar(ch);
		}
		ch=getchar();
	}
	fclose(fp);
	putchar(10);
	return 0;
}

/*****两个磁盘文件A、B，各存放一行字母，要求把两个文件的信息合并，并按字母顺序排序输出到一个新的文件C中保存并显示*******/
#elif 0
#include<stdio.h>
#include<stdlib.h>

void string(char *p,int n)
{
    int i,j,k,t;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(p[j]<p[k])k=j;
			if(k!=j)
			{
				t=p[i];
				p[i]=p[k];
				p[k]=t;
			}
	}
}

int main()
{
	FILE *fa,*fb,*fc;
	int i=0,j;
	char cha,chb,chc,chc1,chc2,*str;
	str=(char*)malloc(sizeof(char));

	/*if(((fa=fopen("A.txt","w"))==NULL)||((fb=fopen("B.txt","w"))==NULL))
	{
		printf("Can't open the file !\n");
		exit(0);
	}
	printf("please input A.txt letter(以!结束):");
	cha=getchar();
	while(cha!='!')
	{
		fputc(cha,fa);
		cha=getchar();
	}
	printf("please input B.txt letter(以!结束):");
	chb=getchar();
	while(chb!='!')
	{
		fputc(chb,fb);
		chb=getchar();
	}
	
	fclose(fa);
	fclose(fb);*/

	if(((fa=fopen("A.txt","r"))==NULL)||((fb=fopen("B.txt","r"))==NULL))
	{
		printf("Can't open the file !\n");
		exit(0);
	}
	
	chc1=fgetc(fa);
	while(!feof(fa))
	{
		str[i]=chc1;
		chc1=fgetc(fa);
		i++;
	}
    chc2=fgetc(fb);
	while(!feof(fb))
	{
		str[i]=chc2;
		chc2=fgetc(fb);
		i++;
	}
    
	string(str,i);

    if((fc=fopen("C.txt","w"))==NULL)
	{
		printf("Can't open the file !\n");
		exit(0);
	}
	for(j=0;j<i;j++)
	{
		fputc(str[j],fc);
		putchar(str[j]);
	}
    
	putchar(10);

    fclose(fa);
	fclose(fb);
	fclose(fc);

	return 0;
}

#else
#include<stdio.h>
void main()
{
printf("     Error!!!\nplease choice code again!\n");
}
#endif



