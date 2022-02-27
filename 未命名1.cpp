#include<stdio.h>
#include<stdlib.h>
#include<string>
int main()
{
	char buf[1024];
	char *strArray[1024];
	char **pArray;
	int i,arrayLen=0;
	printf("sue"end"jishu:"\n);
	while (l)
	{
		scanf("%s",buf);
		if(strcmp(buf,"end")=0)
		{
			printf("Ω· ¯ ‰»Î°£\n");
			break;
		}
		strArray[arrayLen]=(char*)malloc(strlen(buf)+1);
		strrcpy(strArray[arrayLen],buf);
		arrayLen++;
	}
	pArray=(char**)malloc(sizeof(char*)*arrLen);
	for(i=0;i<arrLen;i++)
	{
		*(pArray+i)=strArray[i];
	}
	printf("zhiqiandewenzi:\n");
	for(i=0;i<arrayLen;i++)
	{
		printf("%s\n",*(pArray+i));
	}
	for(i=0;i<arrayLen;i++)
	{
		free(strArray[i]);
	}
	free(pArray);
	return 0;
}
