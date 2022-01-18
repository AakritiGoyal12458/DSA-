
#include <stdio.h>
int main()
{
    int x;
    x=5;
    printf("%d \n",x);
    int *p;
    p=&x;
    printf("%u \n",p);//2776366956 
    printf("%u \n",*p);//5
    printf("%u \n",p+1);//2776366960
    printf("%u \n",p+2);//2776366964
    printf("%u \n",x+1);//6
    printf("%u \n",*p+1);//5+1 = 6 
    return 0;
}
