#include <stdio.h>

int main(){
int a;
int b;
printf("\nsaisie de premier Nombre:");
scanf("%d",&a);
do{
printf("\nsaisie de second Nombre:");
scanf("%d",&b);
}while(b==0);
printf("\n%d+%d=%d",a,b,a+b);
printf("\n%d-%d=%d",a,b,a-b);
printf("\n%d/%d=%d\n",a,b,a/b);
return(0);
}
