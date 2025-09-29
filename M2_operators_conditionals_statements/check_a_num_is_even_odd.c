#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    if(n %2 == 0){
        printf("%d isEven\n", n);
    }else{
        printf("%d is Odd\n", n);
    }
    return 0;
}