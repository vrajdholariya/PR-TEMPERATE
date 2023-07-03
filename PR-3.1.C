// write a program to print all alphabets from a to z by skipping 3 alphabets using do while loop .

#include<stdio.h>
#include<conio.h>

void main(){
char v;

clrscr();
printf("THE ALPHABET AFTER SKIPPING 3 ALPHABET ARE : \n");
for(v='a';v<='z';v++){
 printf("%c\n",v);
 v+=3;

}
getch();
}