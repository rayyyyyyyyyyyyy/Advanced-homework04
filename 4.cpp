#include <conio.h>
#include<stdio.h>
int main()
{
int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int i,j,k,y,m,d,b,n,sum;
while(scanf("%d/%d/%d",&y,&m,&d)!=EOF)/*EX:2019/1/1*/
{
sum=0;
for(i=1;i<m;i++)
sum=sum+days[i];
sum=sum+d;
if((y%4==0||(y%400==0&&y%100!=0)) &&m>2)
sum=sum+1;
printf("��%d��\n",sum);
}
}
