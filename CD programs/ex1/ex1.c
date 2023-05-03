#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

FILE *fp=fopen("ip.txt","r");
char line[100][100];
char dt[10][10]={"int","char","float","double"};
char types[100];
int n;
while (fgets(line[n], 100, fp))
n++;
int i=0;
printf ("\n IDENTIFIERS \t DATATYPES \t ADDRESS \n");
for (i = 0; i < n; i++)
{
	char *str = strtok (line[i], " ");
	if ( strcmp(dt[0], str) == 0 || strcmp(dt[1], str) == 0 || strcmp(dt[2], str) == 0 || strcmp(dt[3], str) == 0 )
	{
		strcpy(types, str);
		while (str = strtok(NULL, " ,\n;"))
	{
		if (strcmp(dt[0], str) == 0 || strcmp(dt[1], str) == 0 || strcmp(dt[2], str) == 0 || strcmp(dt[3], str) == 0 )
		{
			strcpy(types, str);
		}
		else
			printf ("\n%s\t\t%s\t\t%p", str, types, str);
	}
	}
}

return 0;


} 
