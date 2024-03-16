#include <stdio.h>
#include <dos.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#define TOP 1
#define DOWN 2
#define LEFT 3 
#define RIGHT 4
void score (int s=1)

{
    static unsigned long sc=0;
    window (70,22,78,23);
    if (s)
    {
    sc =sc+100;
cprintf ( "                ") ;
window (70,22,78,23) ;
cprintf ("%ld" , sc ) ;
    
    
}

else 
    sc=0;
}
void status (char *s ,int c=WHITE)
{
    window(70,22,78,25);
    textcolour(c);
    cprintf("%s" , s ) ;
    for(int x=strlen(s);x<7;x++)
    cprintf("     " ) ;
    textcolour(WHITE) ;
    
}    
void main ()
{
    clrscr();
    _setcursortype(_NOCURSOR);
}