//Question#: 11
//Name: Mary-Rose Tracy 
//ID #: 1001852753
#include <stdio.h>
#include <stdint.h>
int main()
{
    uint8_t a=0, b=6;
    int i;
    printf("a \t a==b \t a<b \t a>b\n");
    for(i=0; i<32; i++)
    {
        int equals=0, aless=0, amore=0;
        if(a == b)
            equals = 1;
        else if(a < b)
            aless = 1;
        else
            amore = 1;
        printf("%d \t %d \t %d \t %d\n", a, equals, aless, amore);
        a = (a+1)%16;
    }
}
