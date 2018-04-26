#include<stdio.h>

int main(){

            char ara[100];

            int conso=0,vowel=0,i;

            printf("Enter your string:");

            gets(ara);

            for(i=0;ara[i]!='\0';i++){

                                        if(ara[i]=='U'||ara[i]=='O'||ara[i]=='I'||ara[i]=='E'||ara[i]=='A'||ara[i]=='u'||ara[i]=='o'||ara[i]=='i'||ara[i]=='e'||ara[i]=='a')
                                        vowel++;

                                        else conso++;
            }

            printf("Number of vowels:%d\n",vowel);

            printf("Number of consonants:%d",conso);


}
