#include <stdio.h>
int factorial(int);
// factorial(5)=1 X 2 X 3 X 4 X 5
// factorial(4)=1 X 2 X 3 X 4
// factorial(3)=1 X 2 X 3
// factorial(2)=1 X 2
// factorial(1)=1
// factorial(n)= n X factorial(n_1)
/*factorial(5)
= 5 * factorial(4)
= 5 * 4 * factorial(3)
= 5 * 4 * 3 * factorial(2)
= 5 * 4 * 3 * 2 * factorial(1)
= 5 * 4 * 3 * 2 * 1 = 120*/

/*
PUSH: factorial(5)
PUSH: factorial(4)
PUSH: factorial(3)
PUSH: factorial(2)
PUSH: factorial(1)
POP:  return 1
POP:  return 2  = 2 * 1
POP:  return 6  = 3 * 2
POP:  return 24 = 4 * 6
POP:  return 120 = 5 * 24
this returns 120 because value of factorial(5) is returned finally and thus we get desired output
factorial(5) waits for factorial(4) to return and so on till factorial(1) returns 1 and every waitting person gets and can retuns

*/
int factorial(int num)
{
    printf("Calling factorial(%d)\n", num);
    if (num == 1 || num == 0)
    {
        printf("Returning 1 (base case)\n");
        return 1;
    }
    if (num < 0)
    {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return -1; // or some error code
    }
    int result = num * factorial(num - 1);
    printf("Returning %d for factorial(%d)\n", result, num);
    return result;
}
int main()
{
    int a = 5;
    printf("the factorial of %d is %d", a, factorial(a));
    return 0;
}