#include<stdio.h>
void swap(int *a,int *b);
int main(){

                int a,b;

                scanf("%d %d",&a,&b);

                printf("Value of a=%d,value of b=%d\n ",a,b);

                swap(&a,&b);

                printf("value of a=%d,value of b=%d",a,b);
return 0;
}

void swap(int *a,int *b){

                int temp;

                temp=*a;

                *a=*b;

                *b=temp;


}
