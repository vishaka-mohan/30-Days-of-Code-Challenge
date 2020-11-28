#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;

    scanf("%d", &t);
    for(int i=0; i<t; i++){
        char s[20000]="";
        scanf("%s", s);
        for(int j=0; s[j]!='\0'; j+=2){
            printf("%c", s[j]);
        }
        printf(" ");
        for(int j=1; s[j]!='\0'; j+=2){
            printf("%c", s[j]);
        }
        printf("\n");

    }
    return 0;
}

