#include<stdio.h>

int main(){

            char ara[100];

            int x,i;

            printf("Enter your string:");

            gets(ara);

            x=strlen(ara);

            for(i=0;i<x/2;i++){

                        if(ara[i]!=ara[x-1-i]){

                                    printf("Not a palindrome.");

                                    break;

                        }


            }

            if(i==x/2) printf("palindrome.");
}
