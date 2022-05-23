#include<stdio.h>
#include<stdlib.h> 

struct Country
{
	char name[100];
	int goldNum;
	int silverNum;
	int bronzeNum;
	int totalNum;
};

typedef struct Country Country;
void printCountry(Country c)
{
	printf("%s\t%d\t%d\t%d\t%d\n",c.name,c.goldNum,c.silverNum,c.bronzeNum,c.totalNum); 
}
int main()
{
	Country c[8];
	FILE*fp=fopen("C:\\Users\\306\\Desktop\\Liming.txt","r");
	if(fp==NULL)
	{
		printf("Error\n");
		exit(0);
	}
	
	for(int i=0;i<8;i++)
	{
		fscanf(fp,"%s %d %d %d %d",c[i].name,&c[i].goldNum,&c[i].silverNum,&c[i].bronzeNum,&c[i].totalNum);
	}
	fclose(fp);
	
	for(int i=0;i<8;i++)
	{
		printCountry(c[i]);
	}
	return 0;
  }
