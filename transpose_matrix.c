#include<stdio.h>
void main()
{
	int a[3][3],i,j,rowsize,colomnsize,sd=0;
	printf("\n Enter rowsize and colomn size");
	scanf("%d%d",&rowsize,&colomnsize);
	for(i=0;i<rowsize;i++)
	{
		for(j=0;j<colomnsize;j++)
		{
			printf("\n Enter elements[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n array in elements are as follows\n");
	for (i=0; i<rowsize;i++)
	{
		for(j=0; j<colomnsize; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<rowsize;i++)
	{
		for(j=0;j<colomnsize;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
