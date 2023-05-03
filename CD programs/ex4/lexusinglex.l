%option noyywrap
%{
#include <stdio.h>
%}

%%
#.* {printf ("\n Preprocessor directive: %s",yytext);}
[a-zA-Z_][a-zA-Z0-9_]*\(  {printf("\n Function: %s", yytext);} 
("int")|("float")|("void")|("char")|("double")|("return") {printf("\n Keywords: %s", yytext);}	
[a-zA-Z_][a-zA-Z0-9_]* {printf("\n Identifiers: %s", yytext);}
[0-9] {printf ("\n Literals: %s", yytext);}
[{.;}]	{printf ("\n Delimiters: %s", yytext);}
"+"|"-"|"*"|"/"|"=" {printf ("\n Operators: %s", yytext);}
"//".*" "*   {printf( "\n Single Line Commments: %s",yytext);}
%%

main ()
{
	yyin = fopen("sample.c", "r");
	yylex();
}
