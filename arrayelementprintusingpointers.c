#include<stdio.h>

int main(){
            int ara[10];

            int *p;

            int i;


            p=ara;

            for(i=0;i<10;i++){

                                scanf("%d",(p+i));

            }

            printf("array is:\n");

            for(i=0;i<10;i++) printf("%d ",*(p+i));


}
