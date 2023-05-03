%option noyywrap

%{
	#include "y.tab.h"
%}

%%
[a-zA-Z_][a-zA-Z_0-9]* return Identifier;
[0-9]+(\.[0-9]*)? 	return Number;
[+-/*]			return Operator;
[\t]			;
.			return yytext[0];
\n			return 0;
%%

