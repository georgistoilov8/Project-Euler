#include <iostream>

using std::cout;
using std::endl;

unsigned reverse(unsigned number){
    unsigned new_number = 0;
    while(number > 0){
        unsigned digit = number % 10;
        number /= 10;
        new_number = new_number*10 + digit;
    }

    return new_number;
}

bool isPalindrome(unsigned number){
    if(number == reverse(number)){
        return true;
    }
    return false;
}

int main()
{
    bool is_found = false;
    unsigned number1 = 999;
    unsigned number2 = 999;
    unsigned max_palindrome = 0;
    while(!is_found){
        if(number1 <= 0){
            break;
        }
        for(unsigned i = 0; i < number2; i++){
            unsigned product = i*number1;
            if(isPalindrome(product)){
                if(max_palindrome < product){
                    max_palindrome = product;
                }
            }
        }
        number1--;

    }

    cout << "Max palindrome: "<< max_palindrome << endl;
    return 0;
}
