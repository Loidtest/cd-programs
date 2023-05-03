
%option noyywrap
%{
#include<stdio.h>
int cnt=0;
int i=0,j=0,k=0;
%}

%%

[[]+ {cnt++;i++;}
[{]+ {cnt++;j++;}
[(]+ {cnt++;k++;}
[}]+ {cnt--;}
[)]+ {cnt--;}
[]]+ {cnt--;}
\n {return 0;}
%%

int main()
{
printf("Enter the ip");	
yylex();
        printf("\nsquare brackets %d",i);
	printf("\ncurlybraces  %d",j);
	printf("\nparanthesis %d",k);

}
