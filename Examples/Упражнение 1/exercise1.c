#include <stdio.h>

int sum(int a, int b){
    int sum = a + b;
    return sum;
}

float div(float a, float b){
    if(b == 0){
        printf("Sorry, but you can't divide by zero\n");
        return 0;
    }
    float div = a / b;
    return div;
}

int triangleArea(int height, int a){
    int area = (height * a) / 2;
    return area;
}

int convertToSeconds(int hour){
    int seconds = hour * 60 * 60;
    return seconds;
}

int getRemainder(int a, int b){
    int rem = a % b;
    return rem;
}

void getDay(int number){
    switch(number){
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Not a valid number\n");
            break;
    }
}

void isLeap(int year){
    if(year % 400 == 0){
        printf("Yes\n");
    }else{
        if(year % 100 == 0){
            printf("No\n");
        }else{
            if(year % 4 == 0){
                printf("Yes\n");
            }else{
                printf("No\n");
            }
        }
    }
}

int getDays(int month){
    if(month == 2){
        return 28;
    }else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        return 31;
    }else{
        return 30;
    }
}

void isPrime(int number){
    if(number == 1){
        printf("No\n");
        return;
    }
    for(int i = 2; i < number; i++){
        if(number % i == 0){
            printf("No\n");
            return;
        }
    }
    printf("Yes\n");
    return;
}

int main()
{
    /* Test of task 1 */
    int s = sum(5, 2);
    printf("Sum of two numbers is: %d\n", s);
    
    /* Test of task 2 */
    int d = div(5, 2);
    printf("Division of two numbers is: %d\n", d);
    int d2 = div(5, 0);
    printf("Division of two numbers is: %d\n", d2);
    
    /* Test of task 3 */
    int a = triangleArea(4, 10);
    printf("Triangle area is: %d\n", a);
    
    /* Test of task 4 */
    int sec = convertToSeconds(2);
    printf("2 hours is %d seconds\n", sec);
    
    /* Test of task 5 */
    int r = getRemainder(5, 2);
    printf("Remainder is: %d\n", r);
    
    /* Test of task 6 */
    getDay(1);
    getDay(6);
    getDay(-3);
    
    /* Test of task 7 */
    isLeap(2000);
    isLeap(2001);
    isLeap(2100);
    
     /* Test of task 8 */
    int day1 = getDays(1);
    printf("Days are: %d\n", day1);
    int day2 = getDays(2);
    printf("Days are: %d\n", day2);
    int day3 = getDays(8);
    printf("Days are: %d\n", day3);
    
    
    /* Test of task 9 */
    isPrime(2);
    isPrime(5);
    isPrime(12);
    isPrime(1);
    return 0;
}
