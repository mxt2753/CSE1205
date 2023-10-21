//Question#: 10
//Name: Mary-Rose Tracy 
//ID #: 1001852753
#include <stdio.h>
#include <stdint.h> //Technically you don't need unit8_T to make this work.
//Therefore lets not do the unit8_T. I mean you can but also it's not necessary.
int main()
{
    printf("a  a==b  a<b  a>b\n");
    int a=0,b=6,i;
    for(i=0;a<512;i++)//You could do 513 but you start at zero so therefore 512
    {
        printf("%d     ", a);
        printf("%d     ",a==b);
        printf("%d     ",a<b);
        printf("%d     ",a>b);
        printf("\n");
        a++;
    }
    //Can you technically do this in a different way, yes.
    //But is it more difficult to do and more particular, also yes.
}
