#include <stdio.h>

int getMax(int a, int b, int c){
    if(a >= b && a >= c){
        return a;
    }else if(b >= a && b >= c){
        return b;
    }else if(c >= a && c >= b){
        return c;
    }else {
        return 0;
    }
}

int main()
{
    /* Test for task 1 */
    float a = getAverage(1,2,3);
    printf("The average is: %f\n", a);
        
    return 0;
}
