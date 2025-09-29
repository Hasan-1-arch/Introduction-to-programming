/* 
Data Type Limitations:
int -> 4bytes      long long int -> 8bytes
float -> 4bytes    double -> 8bytes

calculations:
(1 byte = 8 bits)
1 bit -> 2^1 = 2 numbers store
2 bits -> 2^2 = 4
3 bits -> 2^3 = 8
32 bits -> 2^32 =10^9 (4,294,967,296)
*/

#include<stdio.h>
int main(){
    int a = 100000; // 10^5
    printf("10^5 = %d\n", a);

    int b = 1000000000; // 10^9
    printf("10^9 = %d\n", b);

    int c = 10000000000; // 10^12
    printf("10^12 = %d\n", c); // garbage value

    long long int d = 10000000000; // 10^10
    printf("10^12 = %lld\n", d);  // print correctly

    float f = 134.567892; 
    printf("float = %lf\n", f); // print garbage

    double e = 2134.567892; 
    printf("double = %lf\n", e); // print garbage
    
    return 0;
}