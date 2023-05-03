%{
	#include<stdio.h>
	#include<stdlib.h>
	char type[20][10], var[20][10], val[20][10];
	#define YYSTYPE char *
	extern FILE *yyin;
	char *toktype;
	void addsymb(char *,char *, char *);
	extern int lineno;
	int n=0;
%}
%token TYPE ID NUM CH
%left '+' '-'
%left '*' '/'
%%
stmt1	:	stmt stmt1
	|	stmt
;
stmt	:	TYPE idlist ';'
	|	asgnexpr
;
idlist	:	idlist ',' iden
	|	iden
;
iden	: ID '=' NUM	{
			if(search($1)!=1) 
				addsymb($1,toktype,$3);
			else 
				printf("\nLine no:%d Multiple Declaration of    Symbol:%s!!!",lineno,$1);
			}
	| ID		{
			if(search($1)!=1)
				addsymb($1,toktype,"-999");
			else 
				printf("\nLine no:%d: Multiple Declaration of Symbol:%s!!!",lineno,$1);
			}
	| ID '=' CH	{
			if(search($1)!=1)
				addsymb($1,toktype,$3);
			else
				printf("\nLine no:%d: Multiple Declaration of Symbol:%s!!!",lineno,$1);
			}
;

asgnexpr: ID '=' expr ';'{
			if(search($1)!=1)
				printf("\nLine no%d:'%s' Symbol Undefined!!",lineno,$1);
			else if(strcmp($3,gettype($1))!=0)
				printf("\nLine no%d: Type mismatch!!",lineno);
			}
;

expr	: expr '+' expr	{
			if(strcmp($1,$3)==0)
				$$=strdup($1);
			else
				$$=strdup("Err");
			}
	| expr '-' expr	{
			if(strcmp($1,$3)==0)
				$$=strdup($1);
			else
				$$=strdup("Err");
			}
	| expr '*' expr	{
			if(strcmp($1,$3)==0)
				$$=strdup($1);
			else
				$$=strdup("Err");
			}
	| expr '/' expr	{
			if(strcmp($1,$3)==0)
				$$=strdup($1);
			else
				$$=strdup("Err");
			}
	| '('expr')'	{$$=strdup($2);}
	| CH		{$$=strdup("char");}
	| NUM		{if(strstr($1,".")!=NULL)$$=strdup("float"); else $$=strdup("int");}
	| ID		{
				if(search($1)!=1) 
					printf("\nLine no:%d: '%s' Symbol Undefined!!",lineno,$1);
				else
					$$=gettype($1);
			}
;
%%
void main()
{
	int i;
	char ch;
	yyin=fopen("input.c","r");
	yyparse();
	printf("\nList symbol table[y/n]:");
	ch=getchar();
	if(ch=='y')
	{
		printf("\n\n\n----------------Symbol Table------------------");
		printf("\n Symbol Name \t Symbol Type \t Symbol Value");
		printf("\n-----------------------------------------------");
       		for(i=0;i<n;i++)
		{
			printf("\n%s\t\t%s\t\t%s",var[i], type[i], val[i]);
		}
	}
}
int search(char *name)
{
        int i;
        for (i=0;i<n;i++)
                if (strcmp(name,var[i])==0)
                        return 1;
        return 0;
}

void addsymb(char *name,char *ty,char *value)
{
	strcpy(type[n],ty);
        strcpy(var[n],name);
	strcpy(val[n],value);
        n++;
}

int yyerror()
{
	printf("Error!!!\n");
	return 0;
}
char *gettype(char *name)
{
	int i;
        for (i=0;i<n;i++)
                if (strcmp(name,var[i])==0)
			return type[i];
}

