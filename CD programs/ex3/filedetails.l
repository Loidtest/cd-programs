%option noyywrap
%{
#include<stdio.h>
int lines=0,characters=0,words=0,symbols=0,numbers=0;
%}
%%
[\n] {lines++;}
[0-9] {numbers++;}
[a-zA-Z] {characters++;}
[' '] {words++;}
. {symbols++;}
%%
int main(){
yyin=fopen("abc.txt","r");
yylex();
printf("\nThe file opened is: %s\n","abc.txt");
printf("\nLines:%d",lines);
printf("\nWords:%d",++words);
printf("\nSymbols:%d",symbols);
printf("\nNumbers:%d",numbers);
return 0;
}
