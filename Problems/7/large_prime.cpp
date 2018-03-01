#include <iostream>

using std::cout;
using std::endl;

int main()
{

    unsigned number = 2;
    unsigned primes[10001];
    unsigned itterator = 0;
    bool is_prime;

    primes[itterator] = number;
    itterator++;
    number++;

    while(itterator < 10001){
        is_prime = true;
        for(int i = 0; i < itterator; i++){
            if(number % primes[i] == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            primes[itterator] = number;
            itterator++;
            number++;
        }else{
            number++;
        }
    }

    cout << "The 10001-st prime number is: " << primes[10000];

    return 0;
}
