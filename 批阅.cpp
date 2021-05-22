#include<stdio.h>
#include<Windows.h>
#include"1.h"
int main()
{
	int n=1;
	while(n==1)
	{
		char ca[]={"|______________________________________________|"};
	char cb[]={"|            欢迎使用多功能计算器              |"};
	char cc[]={"|                                              |"};
	char cd[]={"|                                              |"};
	char ce[]={"|____  ____  ____  ____  ____  ____  ____  ____|"};
	char cf[]={"|   ________   ________   ________   ________  |"};
	char cg[]={"|   |   9  |   |   8  |   |   7  |   |   *  |  |"};
	char ch[]={"|   |______|   |______|   |______|   |______|  |"};
	char ci[]={"|   |   6  |   |   5  |   |   4  |   |   -  |  |"};
	char cj[]={"|   |   3  |   |   2  |   |   1  |   |   +  |  |"};
	char ck[]={"|   |   (  |   |   0  |   |   )  |   |   /  |  |"};
	char cl[]={"本计算器能进行10进制数"};
	char cm[]={"+,-,*,\,()的连续计算"};
	char cn[]={"输入所要经计算的表达式"};
	char co[]={"如：a*b/(c-d)"};
	printxy(3,0,ca);
	printxy(3,1,cb);
	printxy(3,2,ca);
	printxy(3,3,cc);
	printxy(3,4,ca);
	printxy(3,5,cd);
	printxy(3,6,ce);
	printxy(3,7,cf);
	printxy(3,8,cg);
	printxy(3,9,ch);
	printxy(3,10,cf);
	printxy(3,11,ci);
	printxy(3,12,ch);
	printxy(3,13,cf);
	printxy(3,14,cj);
	printxy(3,15,ch);
	printxy(3,16,cf);
	printxy(3,17,ck);
	printxy(3,18,ch);
	printxy(3,19,ca);
	printxy(55,3,cl);
	printxy(55,4,cm);
	printxy(55,5,cn);
	printxy(55,6,co);
	char a[80];
	gotoxy(4,5);
	scanf("%s",a);
	float x;
	x=muli(a);
	gotoxy(35,5);
	printf("=%.2f",x);
	gotoxy(55,10);
		printf("继续计算/退出? 1/0?");
		scanf("%d",&n);
		if (n==1)
		{
			iniarray(a);
			system("cls");
			fflush(stdin);
		}
		else
		{
			system("cls");
			char cp[]={"##################"};
			char cq[]={"#                #"};
			char cr[]={"#----谢谢使用----#"};
			char cs[]={"       "};
			printxy(5,5,cp);
			printxy(5,6,cq);
			printxy(5,7,cr);
			printxy(5,8,cq);
			printxy(5,9,cp);
			printxy(10,10,cs);
			printf("\n");
			n=0;
		}
	}
}
