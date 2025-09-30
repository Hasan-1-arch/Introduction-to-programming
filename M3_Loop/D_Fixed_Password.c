/* 
Code Forces: D_Fixed_Password
Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

Note: The "Correct" password is the number 1999.
Output
Print "Wrong" if the password is typed wrong otherwise, print "Correct" if the password is typed correctly.
*/


#include <stdio.h>
int main()
{
    int x;
    while (scanf("%d", &x))
    {
        if (x == 0) // corner case
            break;

        if (x == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
            printf("Wrong\n");
    }
    return 0;
}