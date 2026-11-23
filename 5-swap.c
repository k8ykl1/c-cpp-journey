#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 69;
    int y = 420;

    printf("%d %d\n", x, y);

    swap(&x, &y);

    printf("%d %d\n", x, y);

    return 0;
}

/*XOR SWAP CODE:

void swap(int *a, int *b){
    *a^=*b;     //a=69^420, b=420
    *b^=a;      //a=69^420, b=420^(69^420)=69
    *a^=b;      //a=(69^420)^69=420, b=69
}
    Woohoo! a and b are swapped.
    Edge Case: if a=b, then a^b will return 0

*/ 