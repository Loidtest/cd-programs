%{
	#include <stdio.h>
	#include <stdlib.h>
%}

%token NUMBER
%left '+' '-'
%left '*' '/' '%'
%left '(' ')'

%%

expression:		identifier { printf ("\n The result is: %d\n", $$); return 0;}
			;

identifier:		identifier '+' identifier	{	$$ = $1 + $3;	}
			|	identifier '-' identifier	{	$$ = $1 - $3;	}
			|	identifier '*' identifier	{	$$ = $1 * $3;	}
			|	identifier '/' identifier	{	if ($3 != 0)	
													$$ = $1 / $3;	
												else
													yyerror("Divide by Zero!");	
											}
			|	identifier '%' identifier	{	if ($3 != 0)	
													$$ = $1 % $3;	
												else
													yyerror("Divide by Zero!");	
											}
			|	'(' identifier ')'			{	$$ = $2;		}
			|	'-' identifier				{	$$ = -$2;		}
			|	NUMBER						{	$$ = $1;		}
			;
%%

int main (void)
{
	printf ("\n Enter the Arithmetic Expression: ");
	yyparse();
}

void yyerror (const char *s)
{
	printf ("\n The given Arithmetic Expression is deemed invalid.");
	exit(0);
}
