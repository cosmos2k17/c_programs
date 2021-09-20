#include <stdio.h>
#define Int long long int 

Int sumOfTwo(Int num1, Int num2)
{
    Int res = 0;
    
    res = num1 + num2;
    
    return res;
}
int main()
{
    Int num1 = 0, num2 = 0;
    printf("Enter two numbers as num1 num2\n");
    scanf("%lld %lld", &num1, &num2);
    printf("Sum of %lld and %lld is %lld\n", num1, num2,
           sumOfTwo(num1, num2));
    return 0;
}
