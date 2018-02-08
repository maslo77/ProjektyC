#include <stdio.h>
#include <conio.h>
int a,b,a1,b1, nwd;
char ch;
int main (void)
{
nwd=0;
a=0;
b=0;
clrscr();
printf("===== Program NWD.C ============= \n");
printf("\nProgram oblicza NWD 2 liczb naturalnych, met. Euklideasa");
printf("\nprzez pomniejszanie wiekszej liczby o mniejsza az do rownosci");
printf("\n\nWprowadz liczby oddzielone spacja: ");
scanf("%i %i",&a, &b);
fflush(stdin); /* flush the input stream in case of bad input */
printf("\na=%i b=%i\n",a,b);
a1=a;
b1=b;
while (a != b)
{
if (a > b)
{
a=a-b;
printf("\na=%i",a);
}
else
{
b=b-a;
printf("\nb=%i",a);
}
}; /* while */
nwd=a;
printf("\n\nNWD liczb %i i %i = %i\n",a1,b1,nwd);
printf("\nNacisnij cos ");
ch = getche();
clrscr();
return 0;
}
