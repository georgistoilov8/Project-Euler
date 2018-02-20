#include <iostream>

using std::cout;
using std::endl;

int findSumOfMultiples(int upper_limit){
    int sum = 0;
    for(int number = 1; number < upper_limit; number++){
        if( (number%3 == 0) || (number%5 == 0) ){
            sum += number;
        }
    }
    return sum;
}

int main()
{
    int upper_limit = 1000;
    int sum = findSumOfMultiples(upper_limit);
    cout << "The sum of multiples of 3 and 5 between 1 and " << upper_limit << " is: " << sum << endl;
    return 0;
}