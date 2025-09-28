/* 
int: 4 bytes  : -100, 100, 0
float: 4 bytes: 3.50, 85.24, 66.45
char: 1 byte  : 'a', 'A', '@', '1'
double: 8 bytes: 3.50, 85.24, 66.45

Specifiers:
int: %d
float: %f
char: %c
double: %lf
*/

#include<stdio.h>
#include<stdbool.h>
int main(){
    int num1 = 10;
    printf("%d\n", num1);

    num1 = 20; // reassignment
    printf("%d\n", num1);

    float f = 4.50;
    printf("%f\n", f);

    char c = '@';
    printf("%c\n", c);

    double d = 3.50;
    printf("%lf\n", d);

    bool b = true; // declaring boolean need library: #include<stdbool.h>
    printf("%d\n", b); // 1

    return 0;
}