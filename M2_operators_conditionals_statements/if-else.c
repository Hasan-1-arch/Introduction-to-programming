#include<stdio.h>
int main(){
    int tk;
    scanf("%d", &tk);

    if(tk >= 1000){
        printf("Burger Khabo\n");
    }
    else if(tk >= 50){
        printf("Fuchka Khabo\n");
    }
    else{
        printf("kichui Khabo na\n");
    }
    return 0;
}