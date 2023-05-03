%option noyywrap
%{
#include<stdio.h>
%}
%%
[a-z]+[a-zA-Z]* {printf("\nWord");}
[0-9]+[0-9]* {printf("\nDigit");}
\n {return 0;}
%%
main()
{printf("Enter a string: ");
yylex();
}
