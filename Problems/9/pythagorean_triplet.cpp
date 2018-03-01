#include <iostream>

using std::cout;
using std::endl;

int main()
{
    for(unsigned a = 1; a < 1000; a++){
        for(unsigned b = 1; b < 1000; b++){
            for(unsigned c = 1; c < 1000; c++){
                if(a + b < c){
                    break;
                }
                if( (a*a + b*b) == c*c){
                    if(a + b + c == 1000){
                        cout << a*b*c << endl;
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}
