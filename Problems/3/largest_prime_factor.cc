#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

bool isNumberPrime(long long int number){
    long long int upper_limit = sqrt(number);
    for(long long int i = 2; i < upper_limit; i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

void findPrimeFactor(long long int number){
    long long int upper_limit = sqrt(number);
    long long int max_factor = 0;
    for(long long int factor = 2; factor < upper_limit; factor++){
        if(number % factor == 0){
            if(isNumberPrime(factor)){
                max_factor = factor;
            }
        }
    }
    cout << "Largest prime factor is: " << max_factor << endl;
}

int main()
{
    long long int number = 600851475143;
    findPrimeFactor(number);
    return 0;
}