#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int numberLength(int number);
bool isPermutation(int number, int product);
void findPermutatedMultiples();

int main()
{
    findPermutatedMultiples();
    return 0;
}

int numberLength(int number){
    int length = 0;
    while(number > 0){
        number /= 10;
        length++;
    }
    return length;
}

bool isPermutation(int number, int product){
    int number_length = numberLength(number);
    int product_length = numberLength(product);
    if(number_length != product_length){
        return false;
    }

    int number_digit_sum = 0;
    int number_digit_product = 1;

    int product_digit_sum = 0;
    int product_digit_product = 1;

    while(number > 0){
        int digit = number % 10;
        number /= 10;
        number_digit_sum += digit;
        number_digit_product *= digit;
    }

    while(product > 0){
        int digit = product % 10;
        product /= 10;
        product_digit_sum += digit;
        product_digit_product *= digit;
    }

    if(number_digit_sum == product_digit_sum && number_digit_product == product_digit_product && number_digit_product != 0){
        return true;
    }else{
        return false;
    }
}

void findPermutatedMultiples(){
    bool is_number_found = false;
    bool is_permuation;
    int number = 1;
    while(!is_number_found){
        is_permuation = true;
        for(int multiplier = 2; multiplier <= 6; multiplier++){
            if(!isPermutation(number, number*multiplier)){
                is_permuation = false;
                break;
            }
        }
        if(is_permuation){
            is_number_found = true;
        }else{
            number++;
        }
    }

    cout << "The smallest number with permutated multiples is: " << number << endl;
}
