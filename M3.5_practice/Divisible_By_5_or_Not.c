/* 
Hacker Rank: Divisible By 5 or Not
You will be given a positive integer N, 
you need to print from 1 to N and besides the value, 
print Yes or No. Print Yes if the value is 
divisible by 5 and print No otherwise.

*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(i % 5 == 0){
            printf("%d Yes", i);
        }else{
            printf("%d No", i);
        }
        printf("\n");
    }
    return 0;
}