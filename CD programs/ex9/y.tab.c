#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#include <stdlib.h>
#include <string.h>

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20100216

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
#ifdef YYPARSE_PARAM_TYPE
#define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
#else
#define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
#endif
#else
#define YYPARSE_DECL() yyparse(void)
#endif /* YYPARSE_PARAM */

extern int YYPARSE_DECL();

#line 2 "tc.y"
	#include<stdio.h>
	#include<stdlib.h>
	char type[20][10], var[20][10], val[20][10];
	#define YYSTYPE char *
	extern FILE *yyin;
	char *toktype;
	void addsymb(char *,char *, char *);
	extern int lineno;
	int n=0;
#line 44 "y.tab.c"
#define TYPE 257
#define ID 258
#define NUM 259
#define CH 260
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    1,    1,    2,    2,    4,    4,    4,    3,
    5,    5,    5,    5,    5,    5,    5,    5,
};
static const short yylen[] = {                            2,
    2,    1,    3,    1,    3,    1,    3,    1,    3,    4,
    3,    3,    3,    3,    3,    1,    1,    1,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    4,    0,    0,    6,    0,    1,
    0,    3,    0,   18,   17,   16,    0,    0,    7,    9,
    5,    0,    0,    0,    0,    0,   10,   15,    0,    0,
   13,   14,
};
static const short yydgoto[] = {                          3,
    4,    7,    5,    8,   18,
};
static const short yysindex[] = {                      -240,
 -248,  -46,    0, -240,    0,  -35,  -43,    0,  -40,    0,
 -236,    0, -248,    0,    0,    0,  -40,  -34,    0,    0,
    0,   -9,  -40,  -40,  -40,  -40,    0,    0,  -28,  -28,
    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,   35,    0,  -32,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -39,  -38,
    0,    0,
};
static const short yygindex[] = {                        33,
    0,    0,    0,   26,    5,
};
#define YYTABLESIZE 220
static const short yytable[] = {                         17,
   13,   11,   12,   11,   12,   11,   12,   25,   23,    6,
   24,    8,   26,   25,    9,   12,    1,    2,   26,   11,
   12,   22,   19,   20,   27,   11,    8,   29,   30,   31,
   32,   28,   25,   23,    2,   24,   10,   26,   21,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   14,   15,   16,
};
static const short yycheck[] = {                         40,
   44,   41,   41,   43,   43,   45,   45,   42,   43,  258,
   45,   44,   47,   42,   61,   59,  257,  258,   47,   59,
   59,   17,  259,  260,   59,   61,   59,   23,   24,   25,
   26,   41,   42,   43,    0,   45,    4,   47,   13,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  258,  259,  260,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 260
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,
"';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,"TYPE","ID","NUM","CH",
};
static const char *yyrule[] = {
"$accept : stmt1",
"stmt1 : stmt stmt1",
"stmt1 : stmt",
"stmt : TYPE idlist ';'",
"stmt : asgnexpr",
"idlist : idlist ',' iden",
"idlist : iden",
"iden : ID '=' NUM",
"iden : ID",
"iden : ID '=' CH",
"asgnexpr : ID '=' expr ';'",
"expr : expr '+' expr",
"expr : expr '-' expr",
"expr : expr '*' expr",
"expr : expr '/' expr",
"expr : '(' expr ')'",
"expr : CH",
"expr : NUM",
"expr : ID",

};
#endif
#ifndef YYSTYPE
typedef int YYSTYPE;
#endif
#if YYDEBUG
#include <stdio.h>
#endif

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

int      yydebug;
int      yynerrs;

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;

#define YYPURE 0

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 88 "tc.y"
void main()
{
	int i;
	char ch;
	yyin=fopen("input.c","r");
	yyparse();
	printf("\nList symbol table[y/n]:");
	ch=getchar();
	if(ch=='y')
	{
		printf("\n\n\n----------------Symbol Table------------------");
		printf("\n Symbol Name \t Symbol Type \t Symbol Value");
		printf("\n-----------------------------------------------");
       		for(i=0;i<n;i++)
		{
			printf("\n%s\t\t%s\t\t%s",var[i], type[i], val[i]);
		}
	}
}
int search(char *name)
{
        int i;
        for (i=0;i<n;i++)
                if (strcmp(name,var[i])==0)
                        return 1;
        return 0;
}

void addsymb(char *name,char *ty,char *value)
{
	strcpy(type[n],ty);
        strcpy(var[n],name);
	strcpy(val[n],value);
        n++;
}

int yyerror()
{
	printf("Error!!!\n");
	return 0;
}
char *gettype(char *name)
{
	int i;
        for (i=0;i<n;i++)
                if (strcmp(name,var[i])==0)
			return type[i];
}

#line 264 "y.tab.c"
/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = data->s_mark - data->s_base;
    newss = (data->s_base != 0)
          ? (short *)realloc(data->s_base, newsize * sizeof(*newss))
          : (short *)malloc(newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base  = newss;
    data->s_mark = newss + i;

    newvs = (data->l_base != 0)
          ? (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs))
          : (YYSTYPE *)malloc(newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 7:
#line 25 "tc.y"
	{
			if(search(yystack.l_mark[-2])!=1) 
				addsymb(yystack.l_mark[-2],toktype,yystack.l_mark[0]);
			else 
				printf("\nLine no:%d Multiple Declaration of    Symbol:%s!!!",lineno,yystack.l_mark[-2]);
			}
break;
case 8:
#line 31 "tc.y"
	{
			if(search(yystack.l_mark[0])!=1)
				addsymb(yystack.l_mark[0],toktype,"-999");
			else 
				printf("\nLine no:%d: Multiple Declaration of Symbol:%s!!!",lineno,yystack.l_mark[0]);
			}
break;
case 9:
#line 37 "tc.y"
	{
			if(search(yystack.l_mark[-2])!=1)
				addsymb(yystack.l_mark[-2],toktype,yystack.l_mark[0]);
			else
				printf("\nLine no:%d: Multiple Declaration of Symbol:%s!!!",lineno,yystack.l_mark[-2]);
			}
break;
case 10:
#line 45 "tc.y"
	{
			if(search(yystack.l_mark[-3])!=1)
				printf("\nLine no%d:'%s' Symbol Undefined!!",lineno,yystack.l_mark[-3]);
			else if(strcmp(yystack.l_mark[-1],gettype(yystack.l_mark[-3]))!=0)
				printf("\nLine no%d: Type mismatch!!",lineno);
			}
break;
case 11:
#line 53 "tc.y"
	{
			if(strcmp(yystack.l_mark[-2],yystack.l_mark[0])==0)
				yyval=strdup(yystack.l_mark[-2]);
			else
				yyval=strdup("Err");
			}
break;
case 12:
#line 59 "tc.y"
	{
			if(strcmp(yystack.l_mark[-2],yystack.l_mark[0])==0)
				yyval=strdup(yystack.l_mark[-2]);
			else
				yyval=strdup("Err");
			}
break;
case 13:
#line 65 "tc.y"
	{
			if(strcmp(yystack.l_mark[-2],yystack.l_mark[0])==0)
				yyval=strdup(yystack.l_mark[-2]);
			else
				yyval=strdup("Err");
			}
break;
case 14:
#line 71 "tc.y"
	{
			if(strcmp(yystack.l_mark[-2],yystack.l_mark[0])==0)
				yyval=strdup(yystack.l_mark[-2]);
			else
				yyval=strdup("Err");
			}
break;
case 15:
#line 77 "tc.y"
	{yyval=strdup(yystack.l_mark[-1]);}
break;
case 16:
#line 78 "tc.y"
	{yyval=strdup("char");}
break;
case 17:
#line 79 "tc.y"
	{if(strstr(yystack.l_mark[0],".")!=NULL)yyval=strdup("float"); else yyval=strdup("int");}
break;
case 18:
#line 80 "tc.y"
	{
				if(search(yystack.l_mark[0])!=1) 
					printf("\nLine no:%d: '%s' Symbol Undefined!!",lineno,yystack.l_mark[0]);
				else
					yyval=gettype(yystack.l_mark[0]);
			}
break;
#line 559 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
