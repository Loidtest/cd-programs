%{
	#include<stdio.h>
	int yyerror();
	int yylex();
	int valid=1;
%}

%token Number Identifier Operator

%%
START: Identifier '=' E|E
E: Identifier F
| Number F
| '-' Number F
| '-' Identifier F
| '('E')'F
;

F: Operator E
|'-'E
|
;
%%

int yyerror()
{
	valid=0;
	printf("\nThe given Arithmetic Expression is Invalid");
	return 0;
}

int main()
{
	printf("\nEnter the expression: ");
	yyparse();

	if(valid==1)
	printf("\nThe given Arithmetic Expression is Valid");
}
