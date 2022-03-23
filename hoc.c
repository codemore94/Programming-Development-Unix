/**
 * Authors: Pike, Kergninghan: Unix Systems: 1984
 * This code is in page 337 of the book mentioned above.
 * represents well different parsing mechanism in C programming environment
 */


#include <stdio.h>

#include <ctype.h>

char* progname;
int lineno = 1;

#include <signa.h>

#include <setjmp.h>


jmp_buf begin;
int indef;

char *infile;
FILE *fin;

char **gargv;
int gargc;





yylex(){
	while((c=getc(fin))== ´ ´ || c == ´ \t ´)
		;
	if(c == EOF)
		return 0;

	if(c == ´.´ || isdigit(c)){
		double d;
	}
		return 0;
}

