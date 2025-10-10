#include <stdio.h>
#include <stdlib.h>
void toh(int n, char s, char d, char t){
    if(n=1)
        printf("\n Move %d disc from %c to %c",n,s,d);
    else{
        toh(n-1,s,t,d);
        printf("\n Move %d disc from %c to %c",n,s,t);
        toh(n-1,t,d,s);
    }
}

int main()
{
    int h;
    printf("\n Read no. of disc:");
    scanf("%d",&h);
    printf("\n Sequence of moves:\n");
    toh(n,'S','D','T');
    int total_move=(1<<n)-1;
    printf("\n The total number of moves=%d\n",totalmoves);
    return 0;9

}
