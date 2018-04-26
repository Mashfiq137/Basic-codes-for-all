#include<stdio.h>

int main(){

            char ara[100];

            int i;

            char ch;

            printf("Enter your string:");

            gets(ara);

            for(i=0;ara[i]!='\0';i++){

                                ch=ara[i];

                                if(ch=='U'||ch=='O'||ch=='I'||ch=='E'||ch=='A'||ch=='u'||ch=='o'||ch=='i'||ch=='e'||ch=='a') continue;

                                printf("%c",ch);


            }

return 0;
}
