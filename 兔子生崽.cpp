#include<stdio.h>
//一对兔子，从出生后第三个月起每个月生一对
//兔子，小兔子长到第三个月后每个月又生出一对
//兔子；假如兔子都不死，问每个月兔子数（输出
//前40个月）
int main()
{
	int f1=1,f2=1,i;
	for(i=1;i<=20;i++)
	{
		printf("%12d%12d",f1,f2);
		if(i%2==0)
		{
			printf("\n");
		}
		f1=f1+f2;
		f2=f1+f2;
	}
	return 0;
}
