// write a program to count the total number of digits in number.

#include<stdio.h>
#include<conio.h>

void main(){
int p,v=0;
clrscr();

printf("ENTER ANY NUMBER :");
scanf("%d",&p);

while(p!=0){
  p=p/10;
  v++;
}
printf("the numericals  are  %d",v);
getch();
}