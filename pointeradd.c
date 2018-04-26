#include<stdio.h>

int main(){

           int a,b,k;

           int *p;

           int *q;

           int *c;

           scanf("%d %d",&a,&b);

           p=&a;
           q=&b;

           c=&k;


           *c=*p+*q;

           printf("sum is %d",k);


}
