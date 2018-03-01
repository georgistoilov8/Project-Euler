#include <iostream>

using std::cout;
using std::endl;

int main()
{
    unsigned number = 2520;
    bool is_found = false;
    bool flag;

    unsigned deviders[8] = {11,13,14,16,17,18,19,20};

    while(!is_found){
        flag = true;
        for(unsigned i = 0; i < 8; i++){
            if(number % deviders[i] != 0){
                flag = false;
                break;
            }
        }
        if(flag){
            is_found = true;
        }else{
            number += 2520;
        }
    }

    cout << "The number is: " << number << endl;
    return 0;
}
