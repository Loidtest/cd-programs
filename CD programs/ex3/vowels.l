%option noyywrap
%{
#include<stdio.h>
int vowels=0;
int consonants=0;
%}
%%
[a e i o u] {vowels++;}
[bcdfghjklmnpqrstvwxyz] {consonants++;}
\n {return 0;}
%%
main(){
printf("Enter a string: ");
yylex();
printf("The no of vowels is: %d\n",vowels);
printf("The no of consonants is: %d",consonants);

}

