#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    if(n >= 0){
        printf("positive\n");
    }else if(n < 0){
        printf("negative\n");
    }
    return 0;
}