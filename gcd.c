#include <stdio.h>
#include <stdlib.h>
int egcd(int a , int b){
    if (a==0){

        return b;
    }
    return egcd(b%a,a);
}

int main()
{
    int a,b;
    printf("\n Enter the number a and b:\n");
    scanf("%d %d",&a,&b);
    printf("\n The gcd of %d and %d is %d",a,b,egcd(a,b));
    return 0;
}
