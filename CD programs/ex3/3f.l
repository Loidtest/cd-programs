
%option noyywrap
%{
#include <stdio.h>
int w = 0, n = 0, f = 0;
%}
%%
[aeiouAEIOU]+[a-zA-Z ]*[\n" ",.]* {w++;}
[0-9]+[a-zA-Z]*[\n" "]* {n++;}
[0-9]+[.][0-9]*[a-zA-Z]*[\n" "]* {f++;}
%%
int main ()
{
yyin = fopen("abc.txt","r");
yylex();
printf ("\n Words starting with Vowels: %d", w);
printf ("\n Words starting with Integers: %d", n);
printf ("\n Words starting with Floating-Point Numerals: %d", f);
}

