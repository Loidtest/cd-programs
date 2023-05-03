%{
  #include<stdio.h>
  #include<stdlib.h>
  int yylex();
  void yyerrror(const char* s);
%}

%token valid invalid

%%
term: valid {printf("\n variable valid"); return 0;}
      |invalid{yyerror("invalid variable");return 0;}
%%

int main(void)
{
 printf("\n enter a string: ");
 yyparse();
 return 0;
}

void yyerror(const char *s)
{
  fprintf(stderr,"%s",s);
}
