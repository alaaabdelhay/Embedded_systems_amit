#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    printf("Enter the number:");
    scanf("%d",&x);
    printf("\n bit number:");
    scanf("%d",&y);
    z = x^(1<< y);
    printf("the number before toggling %d bit: %d (in decimal)\n",y,x);
    printf("the number after toggling %d bit: %d (in decimal)\n",y,z);
    return 0;
}
