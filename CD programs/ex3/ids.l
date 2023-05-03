%option noyywrap
%{
#include<stdio.h>
%}
%%
[a-zA-Z_]+[a-zA-z0-9_]* printf("\nThe given string is a valid identifier\n");
.* printf("\nThe given string is an invalid identifier\n");
[\n] return 0;
%%
int main(){
printf("\nEnter the identifier: ");
yylex();
return 0;
}
