#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char buf[1024];
	char *strArray[1024];
	char **pArray;
	int i,arrayLen=0;
	printf("������ѧ�������������֡�end������:\n");
	while (1)
	{
		scanf("%s",buf);
		if(strcmp(buf,"end")==0)
		{
			printf("�������롣\n");
			break;
		}
		strArray[arrayLen]=(char*)malloc(strlen(buf)+1);
		strcpy(strArray[arrayLen],buf);
		arrayLen++;
	}
	pArray=(char**)malloc(sizeof(char*)*arrayLen);
	for(i=0;i<arrayLen;i++)
	{
		*(pArray+i)=strArray[i];
	}
	printf("��֮ǰ���������:\n");
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
