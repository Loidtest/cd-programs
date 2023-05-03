
%option noyywrap
%{
#include<stdio.h>
%}
%%
[a-z A-z 0-9]+[+*/]+[a-z A-z 0-9]+[+*/]*+[a-z A-z 0-9]* {printf("\nValid");}
.* {printf("Invalid");}
\n {return 0;}
%%
main()
{
printf("Enter an arithmetic expression : ");
yylex();
}

