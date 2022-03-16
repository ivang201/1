#include <stdio.h>
char fA(char x){
    if ('a' <= x && x <= 'z') {
        x += 'A' - 'a';
    }
    return x;
}
char fa(char x){
    if ('A' <= x && x <= 'Z') {
        x += 'a' - 'A';
    }
    return x;
}
int main()
{
    char c;
    int i = 0;
    int b = 1;
    char x[1000] = {'0'};

    while ((c = getchar()) != EOF) {
        if((c == '\n')){
            x[i] = ' ';
            i = i+1;
            b = b+1;
        }
        if(c==','){
            x[i] = ',';
        }
        if((b%2) == 0){
            x[i] = fA(c);
            i = i + 1;
        }else{
            x[i] = fa(c);
            i = i + 1;
        }
    }
    int v = 0;
    while(v != i){
        if((x[v] == ',')){
            putchar(',');
            putchar(' ');
            v = v+2;

        }
        if((x[v] == ' ')){
            v = v+2;
            putchar('\n');
        }
        putchar(x[v]);
        v = v+1;
    }
}
