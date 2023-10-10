%{
   #include <stdio.h>
   int flag = 0;
%}

%%

%token NUMBER

%left '+' '-'

%left '*' '/' '%'

%left'(' ')'

/* Rule section */

Arithmetic Expression: E{
   printf("\n Result=%d\n",$$);
   return 0;
};

E:E'+'E {$$=$1+$3;}

|E '-' E {$$=$1-$3;}
|E '*' E {$$=$1*$3;}
|E '/' E {$$=$1/$3;}
|E '%' E {$$=$1%$3;}

| '('E')' {$$=$2;}

|

| NUMBER {$$=$1;}
;
|

%%

// driver code

void main(){
   printf("\n Enter any Arithmetic Expression which can have operations: ");

   yyparse();
   if (flag==0)
   printf("\n Invalid");
}

void yyerror()
{
   printf("\n Invalid expression");
   flag=1;
}