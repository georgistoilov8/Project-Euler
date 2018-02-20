#include <iostream>

using std::cout;
using std::endl;

int fibonacci(int number);

int findFibonacciNumbers(int &sum_even){
    int number;
    int next_fib_number = 1;
    do{
        number = fibonacci(next_fib_number);
        if(number%2 == 0)
            sum_even += number;
        next_fib_number++;
    }while(number < 4e6);

    return sum_even;
}

int fibonacci(int number){
    if(number == 1){
        return 1;
    }

    if(number == 2){
        return 2;
    }

    return fibonacci(number - 1) + fibonacci(number - 2);
}


int main()
{
    int sum = 0;
    findFibonacciNumbers(sum);
    cout << "The sum of the even fibonacci numbers is: " << sum << endl;
    return 0;
}