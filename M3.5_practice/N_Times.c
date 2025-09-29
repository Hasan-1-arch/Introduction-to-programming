/* 
Hacker Rank: N Times
I know and you also know that you love practice day so much. 
So this task is for you. You will be given a positive integer N, 
you need to print "I Love Practice" N times.

Here positive integer means those integers that are greater than 0.
*/


#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("I Love Practice\n");
    }
    return 0;
}