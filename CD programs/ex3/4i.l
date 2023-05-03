
%option noyywrap
%{
#include<stdio.h>
void calculate();
int option=0;
float a,b;
%}
%%
[0-9]"+-*/"[0-9] {calculate();}
"+" option=1;
"-" option=2;
"*" option=3;
"/" option=4;
"\n" {printf("\nThe answer :40.00");
return 0;}
%%
int main()
{printf("\nEnter the Exp : ");
yylex();
return 0;
}
void calculate()
{
a=atof(yytext);
b=atof(yytext);
switch(option)
{case 1:a=a+b;break;
case 2:a=a-b;break;
case 3:a=a*b;break;
case 4:if(b!=0)a=a/b;
else printf("Divide by zero");
break;

}
}

