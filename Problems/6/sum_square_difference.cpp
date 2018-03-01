#include <iostream>

using std::cout;
using std::endl;

unsigned abs(int number){
    if(number < 0){
        return -number;
    }
    return number;
}

int main()
{
    unsigned sum = 0;
    unsigned square_sum = 0;
    for(unsigned number = 1; number <= 100; number++){
        square_sum += number*number;
        sum += number;
    }

    int difference = square_sum - sum*sum;

    cout << "The difference is: " << abs(difference) << endl;


    return 0;
}
