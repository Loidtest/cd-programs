%option noyywrap

digit[0-9]
letter[a-zA-Z]

%{
  #include "y.tab.h"
%}

%%
{letter}({letter}|{digit})*  {return valid;}
.   { return invalid;}
%%

