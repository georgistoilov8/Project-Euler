#include <stdio.h>

float getAverage(int a, int b, int c){
    int sum = a + b + c;
    float average = sum / 3;
    return average;
}

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

int getMin(int a, int b, int c){
    if(a < b && a < c){
        return a;
    }else if(b < a && b < c){
        return b;
    }else if(c < a && c < b){
        return c;
    }else {
        return 0;
    }
}

void printArray(int* arr, int size){
    int counter;
    for(counter = 0; counter < size; counter++){
        printf("%d, ", arr[counter]);
    }
}


int main()
{
    /* Test for task 1 */
    float a = getAverage(1,2,3);
    printf("The average is: %f\n", a);
    
    /* Test for task 2 */
    int max = getMax(1,2,3);
    printf("The max number is: %d\n", max);
    
    /* Test for task 3 */
    int min = getMin(1,2,3);
    printf("The min number is: %d\n", min);
    
    /* Test for task 4 */
    int arr[] = {1,2,3,4,5,6,7};
    // Проучи какво е sizeof(...)
    int size = sizeof(arr) / sizeof(int);
    int counter;
    for(counter = 0; counter < size; counter++){
        printf("%d, ", arr[counter]);
    }
    
    printf("\n");
    
    /* Test for task 5 */
    printArray(arr, size);
    
    return 0;
}
