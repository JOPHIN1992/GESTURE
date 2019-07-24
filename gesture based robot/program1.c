#include<stdio.h>
#include<reg52.h>
#define PORT P2 0xff
#define st 0x0a;
#define rev 0x05;
#define lt 0x06;
#define rt 0x09;
#define stop 0x00;
void delay(unsigned int t)
{
  unsigned int i,j;
   for(i=0;i<t;i++)
   for(j=0;j<1275;j++);
}
void main()
 {
  while(1)
   {
   P2=st;
   delay(100);
   P2=rev;
   delay(100);
   P2=lt;
   delay(100);
   P2=rt;
   delay(100);
   P2 =stop;
   delay(100);
   }
 }