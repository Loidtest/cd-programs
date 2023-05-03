%option noyywrap
%{
#include<stdio.h>
%}
%%
[0-9]*[13579] {printf("Odd number");}
[0-9]*[02468] {printf("Even number");}
\n {return 0;}
%%
main(){
printf("Enter any number: ");
yylex();
}
