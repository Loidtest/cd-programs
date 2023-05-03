%option noyywrap
%{
#include<stdio.h>
%}
%%
[a-z,A-Z]+[a-z,A-Z,0-9]* printf("\nThe given string is a valid identifier\n");
.* printf("\nThe given string is an invalid identifier\n");
[\n] return 0;
%%
int main(){
printf("\nEnter the identifier: ");
yylex();
return 0;
}
