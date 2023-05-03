%option noyywrap
%{
#include<stdio.h>
%}
%%
[0-9]+ {printf("Number is positive\n");}
[-][0-9]+ {printf("Number is negative\n");}
\n {return 0;}
%%
main(){
printf("Enter the number: ");
yylex();
}
